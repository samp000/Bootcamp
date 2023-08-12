	

	//Question 15: copy source list in destination and sort it

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

	void sortList(node **head) {
	
		node *tmp1 = *head ,*tmp2 = NULL;

		while(tmp1 != NULL) {
		
			tmp2 = tmp1->next;

			while( tmp2 != NULL) {
			
				if(tmp1->data > tmp2->data) {
				
					int data = tmp1->data;
					tmp1->data = tmp2->data;
					tmp2->data = data;
				}
				tmp2 = tmp2->next;
			}
			
			tmp1 = tmp1->next;
		}
	}

	void copyAndSortNodes(node **dest , node **src) {

		if(*dest != NULL)		//if we are calling copyAndSortNodes() multiple times dest should be NULL everytime
			*dest = NULL;

		node *tmp1 = *dest , *tmp2 = *src;
		
		if(*src != NULL) {		//if source have nodes
		
			while(tmp2 != NULL ) {
			
				if(*dest == NULL) {
					*dest = copyNode(tmp2);
					tmp1 = *dest;
					tmp2 = tmp2->next;
				}else {
				
					tmp1->next = copyNode(tmp2);
					tmp1 = tmp1->next;
					tmp2 = tmp2->next;
				}
			}

			sortList(dest);

		}else { 			// if src list is empty 
			printf("Source linked list is empty\n");
		}

		printf("After copying and sorting nodes 2 lists are:\n");
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
			printf("2.Print 1st list\n");
			printf("3.Print 2nd list\n");
			printf("4.Copy And Sort nodes\n");
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
				case 4:
					copyAndSortNodes(&head2,&head1);	
					break;
				case 5:
					exit(0);
					break;
			}
		
		}
	
	}


