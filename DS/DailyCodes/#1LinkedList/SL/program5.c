	
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Movie {
	
		char mName[20];
		float rat;
		struct Movie *next;
	}Mov;
	void addNode(Mov**);
	void printList(Mov*);

	void main() {

		Mov *head = NULL;
		
		addNode(&head);	
		addNode(&head);
		printList(head);
		addNode(&head);
		printList(head);
		
	}

	void addNode(Mov **head) {
	
		Mov *newNode = (Mov*)malloc(sizeof(Mov));
		
		printf("===================================\n");
		printf("Enter movie name:");
		fgets(newNode->mName,20,stdin);
		printf("Enter movie rating:");
		scanf("%f",&newNode->rat);
		printf("===================================\n");
		getchar();

		newNode->next=NULL;

		if(*head == NULL) {
			*head = newNode;
		}else {
		
			Mov *tmp = *head;

			while(tmp->next != NULL) 
				tmp = tmp->next;

			tmp->next = newNode;
		}
	}

	void printList(Mov *head) {	
		Mov *tmp = head;
		while(tmp != NULL) {
			printf("%s",tmp->mName);
			printf("|%f->",tmp->rat);
			tmp = tmp->next;
		}
		printf("NULL\n");
	}
