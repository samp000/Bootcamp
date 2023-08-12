	

	//Question 10: Copy nodes data whose sum is even
	
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

	int isEvenDigit(int num) {
	
		int sum=0;

		while(num != 0 ) {
		
			sum = sum + num%10;
			num = num/10;
		}

		if(sum%2 == 0)
			return 1;
		else 
			return 0;
	}

	void copyNodes(node **dest , node **src) {
	
		node *tmp1 = *dest , *tmp2 = *src;
		
		if(*src != NULL) {		//if source have nodes
		
			while(tmp2 != NULL) {
			
				if(isEvenDigit(tmp2->data)) {

					if(*dest == NULL) {
						*dest = copyNode(tmp2);
						tmp1 = *dest;
					}else {
				
						tmp1->next = copyNode(tmp2);
						tmp1 = tmp1->next;
					}
				}
					
				tmp2 = tmp2->next;
			}
			
			if(*dest != NULL)
				tmp1->next = tmp2;


		}else { 			// if src list is empty 
			printf("Source linked list is empty\n");
		}

		printf("After copying nodes 2 lists are:\n");
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
			printf("4.Copy nodes data whose sum is even\n");
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
					copyNodes(&head2,&head1);	
					break;
				case 5:
					exit(0);
					break;
			}
		
		}
	
	}


