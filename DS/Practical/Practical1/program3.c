
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Fest {
	
		char name[20],knownFor[20];
		int dur;
		struct Fest *next;

	}Fest;

	Fest *head = NULL;

	void addNode() {
	
		Fest *newNode = (Fest*)malloc(sizeof(Fest));
		printf("Enter festival name:");
		fgets(newNode->name,20,stdin);
		printf("Enter speciality of festival:");
		fgets(newNode->knownFor,20,stdin);
		printf("Enter duration of festival(days):");
		scanf("%d",&newNode->dur);

		newNode->next = NULL;

		getchar();

		if(head == NULL)
			head = newNode;
		else {
		
			Fest *tmp = head;
			while(tmp->next != NULL) 
				tmp = tmp->next;

			tmp->next = newNode;
		}
	}

	void printList() {
	
		Fest *tmp = head;

		while(tmp != NULL) {
		
			printf("|%s_%s_%d|->",tmp->name,tmp->knownFor,tmp->dur);
			tmp=tmp->next;
		}

		printf("NULL\n");
	}

	int countNodes() {
	
		int cnt=0;
		Fest *tmp = head;

		while(tmp!=NULL) {
		
			cnt++;
			tmp = tmp->next;
		}

		return cnt;
	}

	void main() {
	
		addNode();
		addNode();
		printList();

		printf("\nNo of nodes in list are:%d\n",countNodes());
	}
