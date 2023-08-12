
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Node {
	
		struct Node* prev;
		int data;
		struct Node* next;

	}Node;

	Node *head = NULL;

	Node *createNode() {

		Node *newNode = (Node*)malloc(sizeof(Node));
		printf("Enter data:");
		scanf("%d",&newNode->data);

		newNode->prev = NULL;
		newNode->next = NULL;

		return newNode;
	}

	int countNodes() {
	
		int cnt=0;
		Node *tmp = head;

		while(tmp != NULL) {
		
			cnt++;
			tmp=tmp->next;
		}

		return cnt;
	}

	void addNode() {
	
		Node *newNode = createNode();

		if(head == NULL)
			head = newNode;
		else {
		
			Node *tmp = head;

			while(tmp->next != NULL) 
				tmp=tmp->next;

			tmp->next = newNode;
			newNode->prev = tmp;
		}
	}

	void addFirst() {
	
		Node *newNode = createNode();

		if(head == NULL) 
			head = newNode;
		else {
			newNode->next = head;
			head->prev = newNode;
			head = newNode;
		}
	}

	int  addAtPos() {
	
		int pos;
		printf("Enter position:");
		scanf("%d",&pos);

		if(pos == 1) 
			addFirst();
		else if(pos < 1 || pos > countNodes()+1) {
		
			printf("Error:Incorrect position\n");
			return -1;
		}else if(pos == countNodes()+1) {	
			addNode();
		}else {
		
			Node *newNode = createNode();
			Node *tmp = head;

			while(head->next != NULL)
				tmp = tmp->next;

			newNode->next = tmp->next;
			newNode->prev = tmp;
			newNode->next->prev = newNode;
			tmp->next = newNode;
		}

		return 0;
	}

	void printList() {
	
		Node* tmp = head;

		printf("-------------------------------------------------\n");
		while(tmp != NULL) {
		
			printf("|%d|->",tmp->data);
			tmp=tmp->next;
		}
		printf("NULL\n");
		printf("-------------------------------------------------\n");
	}

	void deleteNode() {

		if(head == NULL) {
			printf("List is empty already\n");
		
		}else if(head->next == NULL) {
		
			free(head);
			head = NULL;
		}else {
		
			Node *tmp = head;

			while(tmp->next->next !=NULL)
				tmp=tmp->next;

			
			free(tmp->next);
			tmp->next = NULL;
		}
	}

	void deleteFirst() {
	
		if(head == NULL) {
			printf("List is empty already\n");
		
		}else if(head->next == NULL) {
			free(head);
			head = NULL;
		}else {
		
			head = head->next;
			free(head->prev);
			head->prev=NULL;
		}
	}

	void deleteAtPos() {
	
		int pos;
		printf("Enter position:");
		scanf("%d",&pos);

		if(pos<1 || pos >countNodes()) {
		
			printf("Error:Incorrect position\n");
		}else if(pos == 1) {

			deleteFirst();

		}else if(pos == countNodes()) {
			
			deleteNode();

		}else {
			
			Node *tmp = head;
			while(pos-2) {
				tmp = tmp->next;
				pos--;
			}

			tmp->next = tmp->next->next; 
			free(tmp->next->prev);
			tmp->next->prev = tmp;
		}
	}

	void main() {
	
		int ch;

		while(1) {
		
			printf("\n1.AddNode\n");
			printf("2.AddFirst\n");
			printf("3.AddAtPos\n");
			printf("4.PrintList\n");
			printf("5.DeleteNode\n");
			printf("6.DeleteFirst\n");
			printf("7.DeleteAtPosition\n");
			printf("8.Exit\n");

			printf("Select any option from above:");
			scanf("%d",&ch);

			switch(ch) {

				case 1:
					addNode();
					break;
				case 2:
					addFirst();
					break;
				case 3:
					addAtPos();
					break;
				case 4:
					printList();
					break;
				case 5:
					deleteNode();
					break;
				case 6:
					deleteFirst();
					break;
				case 7:
					deleteAtPos();
					break;
				case 8:
					exit(0);
					break;
			}

		}
	}
