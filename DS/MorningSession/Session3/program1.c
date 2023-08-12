
	//inplace reverse of single linked list

	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Node {
	
		int data;
		struct Node *next;
	}Node;

	Node *createNode() {
	
		Node *newNode = (Node*)malloc(sizeof(Node));
		printf("Enter data:");
		scanf("%d",&newNode->data);

		newNode->next = NULL;
	}

	void addNode(Node **head) {
	
		Node *newNode = createNode();

		if(*head == NULL) {
			*head = newNode;
		}else {
		
			Node *tmp = *head;

			while(tmp->next != NULL) 
				tmp = tmp->next;

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
	
		Node *tmp1 = NULL;

		if(*head == NULL) {

			printf("Error:List is empty\n");
		}else {

			Node *tmp2 = (*head)->next;		//if we write this line outside "else" it gives segmentation fault

			while(*head != NULL) {					

				tmp2 = (*head) -> next;
				(*head)->next = tmp1;
				tmp1 = *head;
				*head = tmp2;
			}

			*head = tmp1;
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
	
