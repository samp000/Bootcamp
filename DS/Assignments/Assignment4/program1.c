
	//Question 1: Find no of occurance of entered element
	
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct node {
	
		int data;
		struct node *next;
	}node;

	node *head=NULL;

	node *createNode() {
	
		node *new = (node*)malloc(sizeof(node));
		printf("Enter number:");
		scanf("%d",&new->data);
		new->next=NULL;

		return new;
	}

	void addNode() {
	
		node *new = createNode();

		if(head == NULL) {
		
			head = new;
		}else {
		
			node *tmp = head;

			while(tmp->next != NULL) 
				tmp = tmp->next;

			tmp->next = new;
		}
	}

	void noOfOcc() {	
		int num;
		printf("Enter element:");
		scanf("%d",&num);

		int cnt=0;
		node *tmp = head;
			
		while(tmp != NULL) {
		
			if(tmp->data == num)
				cnt++;

			tmp = tmp->next;
		}

		printf("\n%d is occured %d times\n",num,cnt);
	}

	void printList() {
	
		node *tmp = head;

		while(tmp != NULL) {
		
			printf("|%d|->",tmp->data);
			tmp = tmp->next;
		}

		printf("NULL\n");
	}



	void main() {
	
		int ch;

		while(1) {
			
			printf("\n1.addNode\n");
			printf("2.noOfOccurance\n");
			printf("3.PrintList\n");
			printf("4.Exit\n");

			printf("\nSelect option:");
			scanf("%d",&ch);

			switch(ch) {
			
				case 1:
					addNode();
					break;
				case 2:
					noOfOcc();
					break;
				case 3:
					printList();
					break;
				case 4:
					exit(0);
					break;
			}
		
		}
	
	}


