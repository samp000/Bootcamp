
	//inplace reverse of single circuler linked list

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
			(*head)-> next  = *head;
		}else {
		
			Node *tmp = *head;

			while(tmp->next != *head) 
				tmp = tmp->next;

			tmp->next = newNode;
			newNode->next = *head;
		}
	}

	void printList(Node *head) {

		Node *tmp = head;

		printf("\n=======================================================\n");
		
		if(head == NULL) {
                        printf("List is empty\n");
		}else if(head->next != head) {

			while(tmp->next != head) {
		
				printf("|%d|->",tmp->data);
				tmp = tmp->next;
			}
			printf("|%d|",tmp->data);
		}else {
			printf("|%d|",tmp->data);
		}
		printf("\n=======================================================\n");
	}

	void reverseList(Node **head) {		//reversing list inplace
	
		Node *tmp1 = NULL,*tmp2 = NULL,*tmp3 = *head;

		if(*head == NULL) {

			printf("Error:List is empty\n");
		}else {
			while(tmp2 != *head) {					

				tmp2 = tmp3 -> next;
				tmp3 -> next = tmp1;
				tmp1 = tmp3;
				tmp3 = tmp2;
			}
			(*head)->next = tmp1;
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
	
