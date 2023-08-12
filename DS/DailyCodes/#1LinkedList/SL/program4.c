
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Movie {
	
		char mName[20];
		float rat;
		struct Movie *next;
	}Mov;

	Mov *head=NULL;
	void addNode();
	void printList();

	void main() {
		addNode();	
		addNode();
		printList();
		addNode();
		printList();
	}

	void addNode() {
	
		Mov *newNode = (Mov*)malloc(sizeof(Mov));
		
		printf("===================================\n");
		printf("Enter movie name:");
		fgets(newNode->mName,20,stdin);
		printf("Enter movie rating:");
		scanf("%f",&newNode->rat);
		printf("===================================\n");

		getchar();

		newNode->next=NULL;

		if(head == NULL) {
			head = newNode;
		}else {
		
			Mov *tmp = head;

			while(tmp->next != NULL) 
				tmp = tmp->next;

			tmp->next = newNode;
		}

	}

	void printList() {
		Mov *tmp = head;
		while(tmp != NULL) {
			printf("%s",tmp->mName);
			printf("|%f->",tmp->rat);
			tmp = tmp->next;
		}
		printf("NULL\n");
	}
