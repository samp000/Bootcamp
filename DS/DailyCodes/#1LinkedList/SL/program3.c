	
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Student {
	
		int id;
		float ht;
		struct Student *next;

	}Std;

	void addNode(Std** head) {
	
		Std *newNode = (Std*)malloc(sizeof(Std));

		newNode -> id = 10;
		newNode -> ht = 10.5;
		newNode -> next = NULL;

		*head = newNode;
	
	}

	void printList(Std *head) {
	
		Std *tmp = head;

		while(tmp != NULL) {
		
			printf("%d_%f",tmp->id,tmp->ht);
			tmp=tmp->next;
		}

		printf("\n");
	}

	void main() {

		Std *head = NULL;
		
		addNode(&head);
		printList(head);
	}
