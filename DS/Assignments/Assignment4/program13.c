	

	//Question 13: find sub-list and return 1st position of sub-list 

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


	int findSubList1(node **dest , node **src) {
	
		node *tmp1 = *dest ,*tmp2 = *src;
		int pos = -1,ptr=0;

		if(*src == NULL || *dest == NULL) {	
			return 0;			//returning 0 cause -1 means sub-list not found and our list indexing is starting from 1 
		}

		
			//if destination and source have nodes 	

			while(tmp2 != NULL && tmp1 != NULL ) {
			
				ptr++;

				if(tmp2->data == tmp1->data) {
					
					if(pos == -1)
						pos = ptr;	

					tmp2 = tmp2->next;
				}else {					//if we got few first nodes and then got unmatched nodes then reset "pos" and "tmp2"
				
					if(pos != -1) {			//we can write below 2 statements directly but ,condition avoides overriding of values multiple times
						pos = -1;
						tmp2 = *src;
					}

				}
				tmp1 = tmp1->next;			
			}

			if(tmp2 != NULL && pos != -1)			//we havent traverse whole src and still we get pos
				return -1;


		return pos;
	}


	void main() {
	
		// here 2nd list is destination 1nd 1st is source

		int ch;

		while(1) {
			
			printf("\n1.addNode in 1st list\n");
			printf("2.addNode in 2nd list\n");
			printf("3.Print 1st list\n");
			printf("4.Print 2nd list\n");
			printf("5.Find sub list's first position\n");
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
					int ret = findSubList1(&head2,&head1);

					if(ret == -1)
						printf("Sub list not fount\n");
					else if(ret == 0)
						printf("Dest/src is empty\n");
					else 
						printf("First Sub list fount at %d position\n",ret);

				       }break;
				case 6:
					exit(0);
					break;
			}
		
		}
	
	}


