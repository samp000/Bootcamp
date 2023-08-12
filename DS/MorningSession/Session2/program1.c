
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Node {
	
		struct Node *prev;
		int data;
		struct Node *next;
	}Node;

	Node *createNode() {
	
		Node *newNode = (Node*)malloc(sizeof(Node));
		printf("Enter data:");
		scanf("%d",&newNode->data);

		newNode->prev = newNode->next = NULL;
	}

	void addNode(Node **head) {
	
		Node *newNode = createNode();

		if(*head == NULL) {
			*head = newNode;
		}else {
		
			Node *tmp = *head;

			while(tmp->next != NULL) 
				tmp = tmp->next;

			newNode->prev = tmp;
			tmp->next = newNode;
		}
	}

	void printList(Node *head) {
	
		printf("\nLinked List is:");

		printf("\n=======================================================\n");
		
		while(head != NULL) {
		
			printf("|%d|->",head->data);
			head = head->next;
		}

		printf("\n=======================================================\n");
	}

	void reverseList(Node **head) {		//reversing list inplace
	
		Node *tmp = NULL;

		if(*head == NULL) {

			printf("Error:List is empty\n");
		}else {
			while(1) {					

				(*head)->prev = (*head)->next;
				(*head)->next = tmp;
		
				if((*head)->prev == NULL)			//when we reach at last node infinite loop will break
					break;

				(*head) = (*head)->prev;
				tmp = (*head)->prev;
			}
		}
	}

	void main() {

		Node *head = NULL;

		int ch;

		while(1) {
		
			printf("\n1.addNode\n");
			printf("2.printList\n");
			printf("3.reverseList\n");
			printf("4.exit\n");

			printf("Select any option:");
			scanf("%d",&ch);

			switch(ch) {
			
				case 1:
					addNode(&head);
					break;
				case 2:
					printList(head);
					break;
				case 3:
					reverseList(&head);
					break;
				case 4:
					exit(0);
					break;
			}
		}
	}
	
