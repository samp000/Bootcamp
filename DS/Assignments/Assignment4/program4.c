	

	//Question 4: concat last n nodes of linked list
	
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct node {
	
		int data;
		struct node *next;
	}node;

	node *head1=NULL;	//for 1st linked list
	node *head2=NULL;	//for 2nd linked list

	node *createNode() {
	
		node *new = (node*)malloc(sizeof(node));
		printf("Enter number:");
		scanf("%d",&new->data);
		new->next=NULL;

		return new;
	}

	void addNode(node **head) {
	
		node *new = createNode();

		if(*head == NULL) {
		
			*head = new;
		}else {
		
			node *tmp = *head;

			while(tmp->next != NULL) 
				tmp = tmp->next;

			tmp->next = new;
		}
	}
	
	void printList(node *head) {
	
		node *tmp = head;

		while(tmp != NULL) {
		
			printf("|%d|->",tmp->data);
			tmp = tmp->next;
		}

		printf("NULL\n");
	}

	int countNodes(node *head) {
	
		int cnt=0;

		while(head != NULL) {
		
			cnt++;
			head = head->next;
		}

		return cnt;
	}


	void concatLastNNodes(node **dest , node **src , int n) {
	
		node *tmp1 = *dest ,*tmp2 = *src;
		int cnt = countNodes(*src);

		if(*src != NULL) {
		
			if(n < cnt) {
			
				while(cnt - n) {
				
					tmp2 = tmp2->next;
					cnt--;
				}
			}	
		}else {		
		
			printf("Src list is empty\n");
		}

		if(*dest != NULL) {
			while(tmp1->next != NULL) 
				tmp1=tmp1->next;
		
		
				tmp1->next = tmp2;

		}else {			//if destination is empty
		
			*dest = tmp2;
		}

		printf("After concatenation 2 lists are:\n");
		printf("=================================================================\n");
		printf("Destination List :\n");
		printList(*dest);
		printf("Source List :\n");
		printList(*src);
		printf("=================================================================\n");
	}


	void main() {
	
		// here 2nd list is destination 1nd 1st is source

		int ch;

		while(1) {
			
			printf("\n1.addNode in 1st list\n");
			printf("2.addNode in 2nd list\n");
			printf("3.Print 1st list\n");
			printf("4.Print 2nd list\n");
			printf("5.Concat two lists\n");
			printf("6.Exit\n");

			printf("\nSelect option:");
			scanf("%d",&ch);

			switch(ch) {
			
				case 1:
					addNode(&head1);
					break;
				case 2:
					addNode(&head2);
					break;
				case 3:
					printList(head1);
					break;
				case 4:
					printList(head2);
					break;
				case 5:{
					int n;
					printf("Enter n nodes:");
					scanf("%d",&n);
					concatLastNNodes(&head2,&head1,n);	
				       }break;
				case 6:
					exit(0);
					break;
			}
		
		}
	
	}


