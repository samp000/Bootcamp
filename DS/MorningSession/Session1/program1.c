
	//program to concat 2nd linked list to first linked list
	//WHile concatinating with circuler linked list, we need to alter the 2nd list otherwise its not posible
	
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Node {
	
		int data;
		struct Node *next;

	}Node;

	Node *head1 = NULL,*head2 = NULL;

	Node *createNode() {
	
		Node *newNode = (Node*)malloc(sizeof(Node));
		printf("Enter data:");
		scanf("%d",&newNode->data);

		newNode->next = NULL;

		return newNode;
	}

	void addNode(Node **head) {
	
		Node *newNode = createNode();

		if(*head == NULL) {
		
			*head = newNode;
		}else {
		
			Node *tmp = *head;

			while(tmp->next != NULL)
				tmp = tmp->next;

			tmp->next = newNode;
		}
	}

	void printList(Node *head) {

		Node *tmp = head;



		printf("\n===========================================================================\n");
		
		if(tmp == NULL) {
			printf("List is empty\n");

		}else {
		
			while(tmp->next != NULL) {
		
				printf("|%d|->",tmp->data);
				tmp = tmp->next;
			}
			printf("|%d|\n",tmp->data);
		}
		printf("\n===========================================================================\n");
	
	 }	

	void concatList(Node **head1,Node **head2) {
	
		Node *tmp = *head1;

		while(tmp->next != NULL) 
			tmp = tmp->next;

		tmp->next = *head2;

	}

	int countNodes(Node *head) {
	
		int cnt=0;

		while(head != NULL) {
		
			cnt++;
			head = head ->next;
		}

		return cnt;
	}
	
	//"head1" is head of first node, "head2" is head of 2nd node "num" is how much last nodes of 2nd node want to concatinate
	
	void concatLastNNodes(Node **head1,Node **head2){		//concatinate last N nodes of 2nd list to 1st list
	
		int num;
		printf("Enter how much last nodes of 2nd list want to add:");
		scanf("%d",&num);

		Node *tmp1 = *head1,*tmp2 = *head2;
		int cnt = countNodes(*head2); 

		if(*head1 != NULL) {
			while(tmp1->next != NULL) 
				tmp1 = tmp1->next;

		}

		if(*head2 == NULL ) {
		
			printf("Error:2nd list is empty\n");
		}else {

			if(num < cnt ) {
			
				while(cnt - num) {
		
					tmp2 = tmp2->next;
					cnt--;
				}

				printf("got here\n");
			}

			if(*head1 != NULL)
				tmp1->next = tmp2;
			else
				*head1 = tmp2;			//if head1 is "NULL"  we will append new nodes directly to head of list1
		}
	}

	void main() {
	
		int n;
		printf("Enter no of to add in linked list1:");
		scanf("%d",&n);

		for(int i=0;i<n;i++)
			addNode(&head1);
		
		printf("Enter no of to add in linked list1:");
		scanf("%d",&n);
		
		for(int i=0;i<n;i++)
			addNode(&head2);

		printList(head1);
		printList(head2);

		concatLastNNodes(&head1,&head2);
	
		printf("\n After concatincation of lists\n\n");
		printList(head1);
		printList(head2);
	}
