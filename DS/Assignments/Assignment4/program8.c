	

	//Question 8: copy n nodes of linked list within a range 

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

	node* copyNode(node *snode) {
	
		node *new = (node*)malloc(sizeof(node));
		new->data = snode->data;
		new->next = NULL;
	
		return new;
	}

	int countNodes(node *head) {
	
		int cnt=0;

		while(head != NULL) {
		
			cnt++;
			head = head->next;
		}

		return cnt;
	}


	void copyRangeOfNNodes(node **dest , node **src , int r1,int r2) {
	
		node *tmp1 = *dest ,*tmp2 = *src;
		int cnt = countNodes(*src);		//count of nodes in 2nd list
		int tr1=r1;				//temporary var to store r1 for further operations

		if(r1 <= 0 || r2 > cnt || r1 > r2) {
		
			printf("Invaid range\n");
			return ;
		}

		if(*dest != NULL) {		//if destination have nodes helful for copying multiple times	
			while(tmp1->next != NULL)
				tmp1 = tmp1->next;
	
		}

		if(*src != NULL) {

			if(r2 <= cnt) {				//entered r2 is less or equal to present nodes
			
				while(r1-1) {
					tmp2 = tmp2->next;
					r1--;
				}

				while(r2-tr1+1) {
				
					if(*dest == NULL){
					
						*dest = copyNode(tmp2);
						tmp1 = *dest;
						tmp2=tmp2->next;
					}else {
						tmp1->next = copyNode(tmp2);
						tmp1=tmp1->next;
						tmp2=tmp2->next;
					}

					r2--;
				}
				
		}

		printf("After copying 2 lists are:\n");
		printf("=================================================================\n");
		printf("Destination List :\n");
		printList(*dest);
		printf("Source List :\n");
		printList(*src);
		printf("=================================================================\n");
	}

	}


	void main() {
	
		// here 2nd list is destination 1nd 1st is source

		int ch;

		while(1) {
			
			printf("\n1.addNode in 1st list\n");
			printf("2.Print 1st list\n");
			printf("3.Print 2nd list\n");
			printf("4.copy n nodes between range\n");
			printf("5.Exit\n");

			printf("\nSelect option:");
			scanf("%d",&ch);

			switch(ch) {
			
				case 1:
					addNode(&head1);
					break;
				case 2:
					printList(head1);
					break;
				case 3:
					printList(head2);
					break;
				case 4:{
					int r1,r2;
					printf("Enter range\n");
					printf("r1:");
					scanf("%d",&r1);
					printf("r2:");
					scanf("%d",&r2);
					copyRangeOfNNodes(&head2,&head1,r1,r2);	
				       }break;
				case 5:
					exit(0);
					break;
			}
		
		}
	}
	


