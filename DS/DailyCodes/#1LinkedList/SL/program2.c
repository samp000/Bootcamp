	
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Student {
	
		int id;
		float ht;
		struct Student *next;

	}Std;

	Std *head = NULL;

	void addNode() {
	
		Std *newNode = (Std*)malloc(sizeof(Std));

		newNode -> id = 1;
		newNode -> ht = 5.5;
		newNode -> next = NULL;

		head = newNode;
	
	}

	void printList() {
	
		Std *tmp = head;

		while(tmp != NULL) {
		
			printf("%d_%f",tmp->id,tmp->ht);
			tmp=tmp->next;
		}

		printf("\n");
	}

	void main() {

		addNode(head);
		printList(head);
	}
