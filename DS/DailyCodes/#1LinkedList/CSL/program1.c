
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Node {
	
		int data;
		struct Node *next;
	}Node;

	Node *head = NULL;

	Node *createNode() {
	
		Node *new = (Node*)malloc(sizeof(Node));

		printf("Enter data:");
		scanf("%d",&new->data);

		new->next = NULL;

		return new;
	}

	void addNode() {
	
		Node *new = createNode();
		if(head == NULL)  {
			
			head = new;
			new->next = head;

		}else {

			Node *tmp = head;

			while(tmp->next != head)
				tmp = tmp->next;

			tmp->next = new;
			new->next = head;
		}
	}

	void addFirst() {
	
		Node *new = createNode();
		
		if(head == NULL)  {
		
			head = new;
			new->next = head;
		
		}else {
		
			//this below code is for setting "next pointer" of last node to head`
			// first set "next ptr" of last node and then set "head & next ptr" of new pointer else it cant find last node

			Node *tmp = head;				
			while(tmp->next != head)
				tmp = tmp->next;

			new->next = head;
			head = new;
			
			tmp->next = head;
		}
	}

	int countNodes() {
	
		Node *tmp = head;
		int cnt=0;

		if(head != NULL) {

			while(tmp->next != head) {
		
				cnt++;
				tmp = tmp->next;
			}
		
			cnt++;
		}

		return cnt;
	}
	
	void addAtPos() {
	
		int pos;
		printf("Enter position:");
		scanf("%d",&pos);

		if(pos < 1 || pos > countNodes()+1) {
		
			printf("Error:Incorrect position\n");
		
		}else if(pos == 1) {
			
			addFirst();
		}else if(pos == countNodes()+1) {
		
			addNode();
		}else {
		
			Node *new = createNode();
			Node *tmp = head;

			while((pos--)-2) 
				tmp = tmp->next;

			new->next = tmp->next;
			tmp->next = new;
		}
	}

	void printList() {
	
		Node *tmp = head;


		printf("============================================================================\n");
	
		if(head == NULL) {
		
			printf("List is empty\n");

		}else if(head->next != head) {
		
			while(tmp->next != head) {
		
				printf("|%d|->",tmp->data);
				tmp = tmp->next;
			}
		
			printf("|%d|\n",tmp->data);

		}else {
		
			printf("|%d|\n",tmp->data);
		}
		printf("\n============================================================================\n");
	}

	void deleteFirst() {

		if(head == NULL) {
		
			printf("Error:List is empty\n");

		}else if(head->next == head) {
		
			free(head);
			head = NULL;

		}else {
		
			Node *tmp1 = head, *tmp2 = head;

			while(tmp2->next != head)
				tmp2 = tmp2->next;
			
			head = tmp1->next;
			tmp2->next = head;

			free(tmp1);

		}
	}

	void deleteNode() {
	
		if(head == NULL) {
		
			printf("Error:List is empty\n");

		}else if(head->next == head) {
		
			free(head);
			head = NULL;

		}else {
		
			Node *tmp = head;

			while(tmp->next->next != head)
				tmp = tmp->next;

			free(tmp->next);
			tmp->next = head;
			
		}
	}
	
	void deleteAtPos() {
	
		int pos;
		printf("Enter position:");
		scanf("%d",&pos);

		if(pos < 1 || pos > countNodes()) {
		
			printf("Error:Incorrect position\n");
		
		}else if(pos == 1) {
		
			deleteFirst();
		}else if(pos == countNodes()) {
		
			deleteNode();
		}else {
			
			Node *tmp1 = head,*tmp2=NULL;

			while((pos--)-2) 
				tmp1=tmp1->next;

			tmp2 = tmp1->next;
			tmp1->next = tmp2->next;
			free(tmp2);	
		}
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
			printf("8.Exit\n");

			printf("\nSelect any option:");
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
			}
		}

	}

	
