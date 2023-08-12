
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Node {
	
		int data;
		int priority;
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
		printf("Enter priority:");
		scanf("%d",&newNode->priority);

		if(newNode->priority < 0 || newNode->priority>5 ) {
		
			printf("Entered Invalid priority!..");
			printf("Enter data again\n");
			free(newNode);			//freeing node cause we are going to call createNode()
			createNode();
		}else {
			newNode->next = NULL;
			return newNode;
		}
	}

	void addNode(Node *newNode) {
	
		if(head == NULL) 
			head = newNode;
		else {
		
			Node *tmp = head;

			while(tmp->next != NULL)
				tmp = tmp->next;

			tmp->next = newNode;
		
		}
	}

	void addFirst(Node *newNode) {
	
		if(head != NULL)
			newNode->next = head;

		head = newNode;
	}


	void addAtPos(int pos ,Node *newNode) {


		if(pos == 1)
			addFirst(newNode);
		else if(pos ==  countNodes()+1 ) {
			addNode(newNode);
		}else {
			Node *tmp = head;

			while(pos-2) {
			
				tmp=tmp->next;
				pos--;
			}

			newNode->next = tmp->next;
			tmp->next = newNode;
		}
	}

	void add() {
	
		Node *newNode = createNode();
		int pos = 1;

		if(head == NULL) {
		
			addFirst(newNode);
		}else {
		
			Node *tmp = head;
			while(tmp != NULL) {
			
				if(tmp->priority <= newNode->priority){
				
					tmp = tmp->next;
					pos++;
				}else 
					break;
			}

			addAtPos(pos,newNode);
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

	void deleteFirst() {
	
		if(head == NULL) {
		
			printf("\nError:Linked List is already empty\n");
		}else {
		
			Node *tmp = head;
			head = tmp->next;
			free(tmp);

		}
	}

	void main() {	

		int ch;

		while(1) {
		
			printf("\n1.Add\n");
			printf("2.Delete\n");
			printf("3.PrintList\n");
			printf("4.Exit\n");

			printf("\n Select any option from above:");
			scanf("%d",&ch);


			switch(ch) {
			
				case 1:
					add();
					break;
				case 2:
					deleteFirst();
					break;
				case 3:
					printList();
					break;	
				case 4:
					exit(0);
					break;
			}
		}

	}


