
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Node {
	
		int data;
		struct Node *left,*right;
	}Node;

	Node* createTree(int);
	void preOrder(Node*);
	void inOrder(Node*);
	void postOrder(Node*);
	
	void main() {

		Node *root = createTree(0);	//passed level of tree , for first node( i.e. root) it is level 0
		
		printf("\nPreorder:");
		preOrder(root);
		
		printf("\nInorder:");
		inOrder(root);

		printf("\nPostorder:");
		postOrder(root);
	
		printf("\n");

	}
	
	
	Node* createTree(int level ) {
		Node *node = (Node*)malloc(sizeof(Node));

		printf("Enter data:");
		scanf("%d",&node->data);

		char side;

		printf("Want to enter node in left subtree at level %d (y/n):",level);
		scanf(" %c",&side);
		
		if(side == 'y' || side == 'Y')	
			node->left = createTree(level+1);
		
		else if(side == 'n' || side == 'N')
			node->left = NULL;

		printf("Want to enter node in right subtree at level %d (y/n):",level);
		scanf(" %c",&side);
		
		if(side == 'y' || side == 'Y')
			node->right = createTree(level+1); 
		
		else if(side == 'n' || side == 'N')
			node->right = NULL;
	
		return node;
	}

	void preOrder(Node *root) {
		if(root == NULL)
			return;

		printf("%d ",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
	
	void inOrder(Node *root) {
		if(root == NULL)
			return;

		inOrder(root->left);
		printf("%d ",root->data);
		inOrder(root->right);
	}
	
	void postOrder(Node *root) {
		if(root == NULL)
			return;
		postOrder(root->left);
		postOrder(root->right);
		printf("%d ",root->data);
	}


