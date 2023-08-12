

	//creting BTree from given inorder and preorder

	#include<stdio.h>
	#include<stdlib.h>

	typedef struct TreeNode {
	
		int data;
		struct TreeNode *left,*right;

	}TreeNode;

	TreeNode *createBT(int inOrder[],int preOrder[],int inStart,int inEnd,int preStart,int preEnd) {
	
		if(inStart > inEnd)
			return NULL;

		//step1: get root data
		int rootData = preOrder[preStart];

		//creating nodes of tree
		TreeNode *tmp = (TreeNode*)malloc(sizeof(TreeNode));
		tmp->data = rootData;

		//step2: search root in inOrder
		int indx;

		for(indx=inStart;indx<inEnd;indx++) {
			if(inOrder[indx] == rootData)
				break;
		}

		//step3 :finding size of left subtree
		int Llength = indx - inStart;

		//creating subTrees by calling same function recursively
		tmp->left = createBT(inOrder,preOrder,inStart,indx-1,preStart+1,preStart+Llength);
		tmp->right = createBT(inOrder,preOrder,indx+1,inEnd,preStart+Llength+1,preEnd);

		return tmp;
	}

	void inOrder(TreeNode *root) {
	
		if(root == NULL)
			return;

		inOrder(root->left);
		printf("%d ",root->data);
		inOrder(root->right);
	}
	
	void preOrder(TreeNode *root) {
	
		if(root == NULL)
			return;

		printf("%d ",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
	
	void postOrder(TreeNode *root) {
	
		if(root == NULL)
			return;

		postOrder(root->left);
		postOrder(root->right);
		printf("%d ",root->data);
	}

	void main() {
	
		int inOrderArr[] = {4,2,3,1,6,7,3};
		int preOrderArr[] = {1,2,4,5,3,6,7};

		int inStart = 0,inEnd = 6;
		int preStart = 0,preEnd = 6;

		TreeNode *root = createBT(inOrderArr,preOrderArr,inStart,inEnd,preStart,preEnd);

		preOrder(root);
		printf("\n");
		inOrder(root);
		printf("\n");
		postOrder(root);
		printf("\n");
	}
