
	//finding mid of linked list "1st approch"
	
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Node {
	
		int data;
		struct Node *next;

	}Node;

	Node *head = NULL;

	int countNodes() {
	
		Node *tmp=head;
		int cnt=0;

		while(tmp != NULL) {
		
			cnt++;
			tmp=tmp->next;
		}

		return cnt;
	}

	Node *createNode() {
	
		Node *newNode = (Node*)malloc(sizeof(Node));

		printf("Enter data:");
		scanf("%d",&newNode->data);

		newNode->next = NULL;

		return newNode;
	}

	void addNode() {
	
		Node *newNode = createNode();
	
		if(head == NULL) 
			head = newNode;
		else {
		
			Node *tmp = head;

			while(tmp->next != NULL)
				tmp = tmp->next;

			tmp->next = newNode;
		
		}
	}
	
	void printList() {
	
		Node *tmp=head;

		printf("-------------------------------------------------------\n");

		while(tmp != NULL) {
		
			printf("|%d|->",tmp->data);
			tmp=tmp->next;
		}
		printf("NULL\n");
		printf("-------------------------------------------------------\n");
	}

	Node *midNode() {

		if(head == NULL) {
		
			return NULL;
		}else {
		
			int mid = countNodes()/2 + 1;		//got mid of list
			Node *tmp = head;
	
			while(mid-1) {
		
				tmp = tmp->next;
				mid--;
			}

			return tmp;
		}
	}

	void main() {

		int ch;

		while(1) {

			printf("\n1.AddNode\n");
			printf("2.PrintList\n");
			printf("3.Mid Node\n");
			printf("4.Exit\n");

			printf("\n Select any option from above:");
			scanf("%d",&ch);


			switch(ch) {

				case 1:
					addNode();
					break;
				case 2:
					printList();
					break;
				case 3:{
					Node *mid = midNode();
				
					if(mid == NULL)
						printf("List is empty\n");
					else
						printf("%d is at mid of list\n",mid->data);
				       }
				       break;
				case 4:
					exit(0);
					break;
			}
		}

	}
