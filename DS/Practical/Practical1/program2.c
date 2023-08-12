
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct State {
	
		char name[20];
		int pop;
		float budget,lit;
		struct State *next;

	}State;

	State *head = NULL;

	void addNode() {
	
		State *newNode = (State*)malloc(sizeof(State));
		printf("Enter state name:");
		fgets(newNode->name,20,stdin);
		printf("Enter population:");
		scanf("%d",&newNode->pop);
		printf("Enter budget of state:");
		scanf("%f",&newNode->budget);
		printf("Enter lit rate of state:");
		scanf("%f",&newNode->lit);

		newNode->next = NULL;

		getchar();

		if(head == NULL)
			head = newNode;
		else {
		
			State *tmp = head;
			while(tmp->next != NULL) 
				tmp = tmp->next;

			tmp->next = newNode;
		}
	}

	void printList() {
	
		State *tmp = head;

		while(tmp != NULL) {
		
			printf("|%s_%d_%f_%f|->",tmp->name,tmp->pop,tmp->budget,tmp->lit);
			tmp=tmp->next;
		}

		printf("NULL\n");
	}

	void main() {
	
		addNode();
		addNode();
		addNode();
		printList();
	}
