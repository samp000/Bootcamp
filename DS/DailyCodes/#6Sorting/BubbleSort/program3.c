
	//sorting linked list using bubble sort
	

	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Node {
	
		int data;
		struct Node *next;

	}Node;

	Node *head = NULL;
	int cnt=0;	//to store no of nodes
	
	Node *createNode() {
	
		Node *newNode = (Node*)malloc(sizeof(struct Node));

		printf("Enter data:");
		scanf("%d",&newNode->data);

		newNode->next = NULL;

		return newNode;
	}

	void addNode() {
	
		Node *newNode = createNode();

		if(head == NULL) {
		
			head = newNode;
		}else {
		
			Node *tmp = head;

			while(tmp->next != NULL) 
				tmp = tmp->next;
		
			tmp->next = newNode;
		}

		cnt++;
	}

	void printList() {

		Node *tmp = head;

		while(tmp != NULL) {
		
			printf("%d-> ",tmp->data);
			tmp = tmp->next;
		}

		printf("\n");
	}

	void sortList() {
	
			for(int i=0;i<cnt;i++) {

				Node *tmp = head;
				int ptr = cnt;

				while(ptr-1-i) {
			
					if(tmp->data > tmp->next->data) {
				
						int t = tmp->data;
						tmp->data = tmp->next->data;
						tmp->next->data = t;
					}

					tmp = tmp->next;

					ptr--;
				}
			}
	}

	void main() {
	
		int n;
		printf("Enter no of nodes you want:");
		scanf("%d",&n);

		printf("Enter linked list data:\n");
		for(int i=0;i<n;i++) 
			addNode();

		printf("\nLinked list before sorting:");
		printList();

		sortList();

		printf("\nLinked list after sorting:");
		printList();
	}
		
