
	//this example is on the basis of traveling , each node i.e. "Place" have distance from previous node and that place name

	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Place {
	
		struct Place *prev;
		char name[20];
		float dist;
		struct Place *next;

	}Place;

	Place *head = NULL;
	
	int countNodes() {

		Place *tmp = head;

		int cnt=0;

		while(tmp != NULL) {
		
			cnt++;
			tmp = tmp->next;
		}

		return cnt;
	}

	Place *createNode() {
	
		Place *newNode = (Place*)malloc(sizeof(Place));

		getchar();

		printf("Enter place name:");

		int i=0;
		char ch;

		while((ch=getchar())!= '\n')
			(*newNode).name[i++] = ch;

		printf("Enter distance:");
		scanf("%f",&newNode->dist);

		newNode->prev = NULL;
		newNode->next = NULL;

		return newNode;
	}

	void addNode() {

		Place *newNode = createNode();

		if(head == NULL) {
		
			head = newNode;
		}else {

			Place *tmp = head;

			while(tmp->next != NULL) 
				tmp = tmp->next;

			tmp->next = newNode;
			newNode->prev = tmp;
		}
	}

	void addFirst() {
	
		Place *newNode = createNode();

		if(head == NULL) {
		
			head = newNode;
		}else {
		
			newNode->next = head;
			head->prev = newNode;
			head = newNode;
		}
	}

	void addAtPos() {
	
		int pos;
		printf("Enter position:");
		scanf("%d",&pos);
		
		if(pos < 1 || pos > countNodes()+1) {
		
			printf("Incorrect position\n");
		}else if(pos == 1) {
		
			addFirst();
		
		}else if(pos == countNodes()+1) {
		
			addNode();
		}else {
		
			Place *newNode = createNode();
			Place *tmp = head;

			while((pos--)-2)
				tmp = tmp->next;

			newNode->next = tmp->next;
			newNode->prev = tmp;
			tmp->next->prev = newNode;
			tmp->next = newNode;
			

		}
	}

	void deleteNode() {
	
		if(head == NULL) {
		
			printf("Error:List is empty\n");

		}else if(head->next == NULL) {
		
			free(head);
			head = NULL;
		}else {
		
			Place *tmp = head;

			while(tmp->next->next != NULL) 
				tmp = tmp->next;

			free(tmp->next);
			tmp->next = NULL;
		}
	}

	void deleteFirst() {
	
		if(head == NULL) {
		
			printf("Error:List is empty\n");

		}else if(head->next == NULL) {
		
			free(head);
			head = NULL;
		}else {
		
			Place *tmp = head;

			head = head->next;
			free(tmp);	
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
		
			Place *tmp = head;

			while((pos--)-2)
				tmp = tmp->next;
			
			tmp->next = tmp->next->next;
			free(tmp->next->prev);
			tmp->next->prev = tmp;
		}
	}


	void printList() {
	
		Place *tmp = head;

		printf("\n----------------------------------------------------------------------------------------------------------\n");
		
		printf("START -> ");

		while(tmp != NULL) {
		
			printf("[%s|%0.1f] <--> ",tmp->name,tmp->dist);
			tmp = tmp->next;
		}
		
		printf("STOP");


		printf("\n----------------------------------------------------------------------------------------------------------\n");
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
					printList(head);
					break;
				case 8:
					exit(0);
					break;
			}
		}
	}
