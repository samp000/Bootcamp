
	//Implementing Level Order Traversal
	

	#include<stdio.h>
	#include<stdlib.h>
	#include<stdbool.h>

	typedef struct TreeNode {
	
		int data;
		struct TreeNode *left,*right;

	}TreeNode;

	typedef struct Queue{
	
		TreeNode *BTNode;
		struct Queue *next;
	}Queue;

	Queue *front = NULL,*rear = NULL;

	bool isEmpty() {
	
		if(front == NULL)
			return true;
		return false;
	}

	void enQueue(TreeNode *BTNode) {
	
		Queue *newFrame = (Queue*)malloc(sizeof(Queue));
		newFrame -> BTNode = BTNode;
		newFrame -> next = NULL;

		if(isEmpty()) {
		
			front = rear = newFrame;
		}else {

			rear -> next = newFrame;
			rear = newFrame;
		}
	}

	TreeNode *deQueue() {
	

		if(isEmpty()) {
		
			return NULL;
		}
		
		TreeNode *ret = front->BTNode;
		Queue *item = front;
		
		if(front == rear) {
			front = rear = NULL;
		}else {
			
			front = front->next;
		}

			free(item);

		return ret;
	}

	void levelOrder(TreeNode *root) {
	
		TreeNode *tmp = root;
		
		enQueue(root);


		while(!isEmpty()) {			
			tmp = deQueue();

			printf("%d ",tmp->data);

			if(tmp->left != NULL)
				enQueue(tmp->left);
			if(tmp->right != NULL)
				enQueue(tmp->right);
		}
		

	}

	void preOrder(TreeNode *root) {
	
		if(root == NULL)
			return;

		printf("%d ",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}


	TreeNode *createTree(int level) {
	
		level++;

		TreeNode *root = (TreeNode*)malloc(sizeof(TreeNode));
		printf("Enter data for level %d node:",level);
		scanf("%d",&root->data);

		char side;

		getchar();
		printf("want to create left node at level %d(y/n):",level);
		scanf("%c",&side);
		
		if(side == 'y' || side == 'Y') {
			root->left = createTree(level);
		}else {
			root->left = NULL;
		}
		
		getchar();
		printf("want to create right node at level %d(y/n):",level);
		scanf("%c",&side);
		
		if(side == 'y' || side == 'Y') {
			root->right = createTree(level);
		}else {
			root->right = NULL;
		}

		return root;
	} 

	void main() {
	
		printf("Creating Binery Tree...\n");
		TreeNode *root = (TreeNode*)malloc(sizeof(TreeNode));
		printf("Enter data for root node:");
		scanf("%d",&root->data);

		char side;

		getchar();
		printf("want to create left subtree(y/n):");
		scanf("%c",&side);
		
		if(side == 'y' || side == 'Y') {
			root->left = createTree(0);
		}else {
			root->left = NULL;
		}


		getchar();
		printf("want to create right subtree(y/n):");
		scanf("%c",&side);
		
		if(side == 'y' || side == 'Y') {
			root->right = createTree(0);
		}else {
			root->right = NULL;
		}

		printf("Level order:");
		levelOrder(root);
		printf("\n");

		printf("PreOrder:");
		preOrder(root);
		printf("\n");

	}
