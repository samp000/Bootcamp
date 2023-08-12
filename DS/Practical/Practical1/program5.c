
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct FootballWC {
	
		int noOfTeams;
		char hostCountry[20],bestStriker[20],bestDefender[20];
		float budget;
		struct FootballWC *next;

	}FWC;

	FWC *head = NULL;

	void addNode() {
	
		FWC *newNode = (FWC*)malloc(sizeof(FWC));
		printf("Enter no of teams in Fifa world cup:");
		scanf("%d",&newNode->noOfTeams);

		getchar();

		printf("Enter host country name:");
		fgets(newNode->hostCountry,20,stdin);	
		printf("Enter best striker name:");
		fgets(newNode->bestStriker,20,stdin);
		printf("Enter best defender name:");
		fgets(newNode->bestDefender,20,stdin);
		printf("Enter budget of football world cup:");
		scanf("%f",&newNode->budget);

		newNode->next = NULL;

		if(head == NULL)
			head = newNode;
		else {
		
			FWC *tmp = head;
			while(tmp->next != NULL) 
				tmp = tmp->next;

			tmp->next = newNode;
		}
	}

	void printList() {
	
		FWC *tmp = head;

		while(tmp != NULL) {
		
			printf("|%d_%s_%s_%s_%f|->",tmp->noOfTeams,tmp->hostCountry,tmp->bestStriker,tmp->bestDefender,tmp->budget);
			tmp=tmp->next;
		}

		printf("NULL\n");
	}

	void main() {
	
		addNode();
		addNode();
		printList();
	}
