
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct TreeNode{
	
		int data;
		struct TreeNode *left,*right;

	}TreeNode;

	int max(int a,int b) {

		if(a > b)
			return a;
		else
			return b;

	}

	int sizeOfTree(TreeNode *root) {
	
		if(root == NULL)
			return 0;

		int left = sizeOfTree(root->left);
		int right = sizeOfTree(root->right);

		return left + right + 1;
	}
	
	int sumOfTree(TreeNode *root) {

		if(root == NULL)
			return 0;

		int left = sumOfTree(root->left);
		int right = sumOfTree(root->right);

		return left + right + root->data;
	}
	
	int heightOfTree(TreeNode *root) {
	
		if(root == NULL)
			return -1;

		int left = heightOfTree(root->left);
		int right = heightOfTree(root->right);

		return max(left,right) + 1;
	}

	void preOrder(TreeNode *root) {	
		if(root == NULL) 
			return ;

		printf("%d ",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
	
	void inOrder(TreeNode *root) {	
		if(root == NULL) 
			return ;

		preOrder(root->left);
		printf("%d ",root->data);
		preOrder(root->right);
	}
	
	void postOrder(TreeNode *root) {	
		if(root == NULL) 
			return ;

		preOrder(root->left);
		preOrder(root->right);
		printf("%d ",root->data);
	}
	
	TreeNode *createTree(int level) {
	
		int lvl = level+1;

		TreeNode *newNode = (TreeNode*)malloc(sizeof(TreeNode));
		printf("Enter data : ");
		scanf("%d",&newNode->data);

		char side;

		getchar();
		printf("Do you want to create left node at level %d(y/n):",lvl);
		scanf("%c",&side);

		if(side == 'y' || side == 'Y')
			newNode->left = createTree(lvl);
		else 
			newNode->left = NULL;
		
		getchar();
		printf("Do you want to create right node at level %d(y/n):",lvl);
		scanf("%c",&side);

		if(side == 'y' || side == 'Y')
			newNode->right = createTree(lvl);
		else 
			newNode->right = NULL;
		
		return newNode;
	}

	void main() {
	
		printf("Creating Binary Tree...\n");

		TreeNode *root = (TreeNode*)malloc(sizeof(TreeNode));
		printf("Enter data for root node : ");
		scanf("%d",&root->data);

		char side;

		getchar();
		printf("Do you want to create left subtree(y/n):");
		scanf("%c",&side);

		if(side == 'y' || side == 'Y')
			root->left = createTree(0);
		else 
			root->left = NULL;
		
		getchar();
		printf("Do you want to create right subtree(y/n):");
		scanf("%c",&side);

		if(side == 'y' || side == 'Y')
			root->right = createTree(0);
		else 
			root->right = NULL;
	
		while(1) {
		
			printf("\n\n1.preOrder\n");
			printf("2.InOrder\n");
			printf("3.PostOrder\n");
			printf("4.height of Tree\n");
			printf("5.size of Tree\n");
			printf("6.sum of Tree\n");
			printf("7.Exit\n");

		
			int op;
			printf("\nSelect operation u want to perform:");
			scanf("%d",&op);

			switch(op) {
			
				case 1:
					preOrder(root);
					break;
				case 2:
					inOrder(root);
					break;
				case 3:
					postOrder(root);
					break;
				case 4:
					printf("Height of tree:%d\n",heightOfTree(root));
					break;
				case 5:
					printf("Size of tree:%d\n",sizeOfTree(root));
					break;
				case 6:
					printf("Sum of nodes of tree:%d\n",sumOfTree(root));
					break;
				case 7:
					exit(0);
					break;
			}

		}
	
		printf("\n");
	}
