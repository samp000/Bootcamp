
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Month {
	
		char mname[20];
		int days;
		struct Month *next;
	}Month;

	Month *head = NULL;

	int countNodes() {
	
		int cnt=0;
		Month *tmp = head;

		if(head == NULL)
			return cnt;
		else {
			while(tmp->next != head) {
		
				cnt++;
				tmp = tmp->next;
			}
		
			return ++cnt;
		}
	}

	Month *createNode() {
	
		Month *newNode = (Month*)malloc(sizeof(Month));

		getchar();

		printf("Enter month name:");
		int i=0;
		char ch;
		while((ch = getchar()) != '\n')
			(*newNode).mname[i++] = ch;

		printf("Enter no of days:");
		scanf("%d",&newNode->days);

		newNode->next = NULL;

		return newNode;
	}

	void addNode() {
	
		Month *newNode = createNode();

		if(head == NULL) {
		
			head = newNode;
			newNode->next = head;
		} else {
		
			Month *tmp = head;

			while(tmp->next != head) 
				tmp = tmp->next;

			tmp->next = newNode;
			newNode->next = head;
		}
	}

	void addFirst() {
	
		Month *newNode = createNode();

		if(head == NULL) {
		
			head = newNode;
			newNode->next = head;
		}else {
		
			Month *tmp = head;

			while(tmp->next != head)
				tmp = tmp->next;

			newNode->next = head;
			head = newNode;
			tmp->next = head;
		}
	}

	void addAtPos() {
	
		int pos;
		printf("Ennter position:");
		scanf("%d",&pos);

		if(pos < 1 || pos > countNodes()+1) {
		
			printf("Incorrect position\n");
		
		}else if(pos == 1) {
		
			addFirst();

		}else if(pos == countNodes()) {
		
			addNode();
		}else {
		
			Month *newNode = createNode();
			Month *tmp = head;

			while((pos--)-2) 
				tmp = tmp->next;

			newNode->next = tmp->next;
			tmp->next = newNode;	
		}
	}

	void deleteNode() {
	
		if(head == NULL) {
		
			printf("List is empty\n");
		
		}else if(head->next == head) {
		
			free(head);
			head = NULL;
		}else {
		
			Month *tmp = head;

			while(tmp->next->next != head)
				tmp = tmp->next;
		
			free(tmp->next);
			tmp->next = head;
		}
	}

	void deleteFirst() {
		
		if(head == NULL) {
		
			printf("List is empty\n");
		
		}else if(head->next == head) {
			
			free(head);
			head = NULL;
		}else {
		
			Month *tmp1 = head, *tmp2 = head;

			while(tmp2->next != head)
				tmp2 = tmp2->next;

			head =  head ->next;
			free(tmp1);
			tmp2->next = head;
		}
	}

	void deleteAtPos() {
	
		int pos;
		printf("Ennter position:");
		scanf("%d",&pos);

		if(pos < 1 || pos > countNodes()) {
		
			printf("Incorrect position\n");
		
		}else if(pos == 1) {
		
			deleteFirst();

		}else if(pos == countNodes()) {
		
			deleteNode();
		}else {
		
			Month *tmp = head,*tmp1=NULL;

			while((pos--)-2) 
				tmp = tmp->next;

			tmp1 = tmp->next;

			tmp->next = tmp1->next;
			free(tmp1);

		}
	}
	void printList() {
	
		Month *tmp = head;

		printf("\n===============================================\n");

		if(head == NULL) {
		
			printf("List is empty\n");
		}else {

			while(tmp->next != head) {
		
				printf("|| %s | %d ||->",tmp->mname,tmp->days);
				tmp = tmp->next;
			}	
			printf("|| %s | %d ||\n",tmp->mname,tmp->days);
		}
		printf("\n===============================================\n");
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
