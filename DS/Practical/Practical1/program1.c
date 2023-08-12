
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Mall {
	
		char name[20];
		int nShop;
		float rev;
		struct Mall *next;

	}Mall;

	Mall *head = NULL;

	void addNode() {
	
		Mall *newNode = (Mall*)malloc(sizeof(Mall));
		printf("Enter mall name:");
		fgets(newNode->name,20,stdin);
		printf("Enter no of shops in mall:");
		scanf("%d",&newNode->nShop);
		printf("Enter revenue of mall:");
		scanf("%f",&newNode->rev);

		newNode->next = NULL;

		getchar();

		if(head == NULL)
			head = newNode;
		else {
		
			Mall *tmp = head;
			while(tmp->next != NULL) 
				tmp = tmp->next;

			tmp->next = newNode;
		}
	}

	void printList() {
	
		Mall *tmp = head;

		while(tmp != NULL) {
		
			printf("|%s_%d_%f|->",tmp->name,tmp->nShop,tmp->rev);
			tmp=tmp->next;
		}

		printf("NULL\n");
	}

	void main() {
	
		addNode();
		printList();
		addNode();
		printList();
	}
