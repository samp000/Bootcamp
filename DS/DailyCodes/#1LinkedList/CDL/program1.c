
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Node {
	
		struct Node *prev;
		int data;
		struct Node *next;
	}Node;

	Node *head = NULL;

	int countNodes() {
	
		int cnt=0;

		Node *tmp = head;
	
		while(tmp->next != head) {
		
			cnt++;
			tmp = tmp->next;
		}

		return ++cnt;	//counting last node

	}

	Node *createNode() {
	
		Node *newNode = (Node*)malloc(sizeof(Node));

		printf("Enter data:");
		scanf("%d",&newNode->data);

		newNode->prev=newNode->next=NULL;
	}

	void addNode() {
	
		Node *newNode = createNode();

		if(head == NULL) {
		
			head = newNode;
			newNode->prev = newNode->next = head;
		}else {

			newNode->next = head;
			newNode->prev = head->prev;
			head->prev->next = newNode;
			head->prev = newNode;		
		}
	}

	void addFirst() {
	
		Node *newNode = createNode(); 

		if(head == NULL) {
		
			head = newNode;
			newNode->prev = newNode->next = head;
		}else {
		
			newNode->next = head;
			newNode->prev = head->prev;
			newNode->prev->next = newNode;
			newNode->next->prev = newNode;

			head = newNode;
		}
	}
	
	void addAtPos() {
	
		int pos;
		printf("Enter position:");
		scanf("%d",&pos);

		if(pos < 1 || pos > countNodes()+1) {
		
			printf("Error:Incorrect position\n");
		
		}else if(pos == 1)  {
		
			addFirst();
		}else if(pos == countNodes()+1) {
		
			addNode();
		}else {
		
			Node *newNode= createNode();
			Node *tmp = head;

			while((pos--)-2)
				tmp = tmp->next;

			newNode->next = tmp->next;
			newNode->prev = tmp;
			tmp->next = newNode;
			newNode->next->prev = newNode;
		}
	}

	int deleteNode() {
	
		if(head == NULL) {
		
			printf("Error:List is empty\n");
			return -1;

		}else if(head->next == head) {
		
			free(head);
			head == NULL;
		}else {
		
			Node *tmp = head->prev;

			head->prev = head->prev->prev;
			head->prev->next = head;
			free(tmp);
		}

		return 0;
	}

	int deleteFirst() {
	
		if(head == NULL) {
		
			printf("Error:List is empty\n");
			return -1;

		}else if(head->next == head) {
		
			free(head);
			head == NULL;
		}else {
		
			Node *tmp = head;

			head->next->prev = head->prev;
			head->prev->next = head->next;
			head = head->next;
			free(tmp);
		}

		return 0;
	}

	int deleteAtPos() {
	
		int pos;
		printf("Enter position:");
		scanf("%d",&pos);

		if(head == NULL) {

			printf("Error:List is empty\n");
			return -1;

		}else if(pos < 1 || pos >countNodes()) {

			printf("Error:Incorrect position\n");
			return -1;
		}else if(pos == 1) {
		
			deleteFirst();
		}else if(pos == countNodes()) {
		
			deleteNode();
		}else {
		
			Node *tmp = head;

			while((pos--)-2) 
				tmp = tmp->next;

			tmp->next = tmp->next->next;
			free(tmp->next->prev);
			tmp->next->prev = tmp;
		}

		return 0;
	}
	

	void printList() {
	
		Node *tmp = head;

		printf("\n================================================================\n");

		while(tmp->next != head) {
		
			printf("|%d|->",tmp->data);
			tmp = tmp->next;
		}
		printf("|%d|\n",tmp->data);
		
		printf("\n================================================================\n");
	}

	void main() {
	
		int ch;

		while(1) {
		
			printf("\n1.addNode\n");
			printf("2.addFirst\n");
			printf("3.addAtPos\n");
			printf("4.deleteNode\n");
			printf("5.deleteFirst\n");
			printf("6.deleteAtPos\n");
			printf("7.printList\n");
			printf("8.exit\n");

			printf("\nSelect any option from above:");
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
					deleteNode();
					break;
				case 5:
					deleteFirst();
					break;
				case 6:
					deleteAtPos();
					break;
				case 7:
					printList();
					break;
				case 8:
					exit(0);
					break;
		
				default:
					printf("Select correct option\n");
					break;
			}
		}

	}
