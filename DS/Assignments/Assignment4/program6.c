	

	//Question 6: copy nodes of src to dest linked list

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


	void copyFirstNNodes(node **dest , node **src , int n) {
	
		node *tmp1 = *dest,*tmp2=*src;
		int cnt = countNodes(*src);		//count of nodes in src list

		 if(*dest != NULL) {             	//if destination have nodes this is helful when we are copying 2nd time
                        while(tmp1->next != NULL)
                                tmp1 = tmp1->next;

                }

		if(*src != NULL) {

			if(n < cnt) {				//entered n is less than present nodes

				while(n) {
				
					if(*dest == NULL){
					
						*dest = copyNode(tmp2);
						tmp1 = *dest;
						tmp2=tmp2->next;
					}else {
						tmp1->next = copyNode(tmp2);
						tmp1=tmp1->next;
						tmp2=tmp2->next;
					}

					n--;
				}
				
			}else { 	//if n > cnt
									
					*dest = *src;		
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


	void main() {
	
		// here 2nd list is destination 1nd 1st is source

		int ch;

		while(1) {
			
			printf("\n1.addNode in 1st list\n");
			printf("2.Print 1st list\n");
			printf("3.Print 2nd list\n");
			printf("4.copy first n nodes \n");
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
					int n;
					printf("Enter no of nodes to copy:");
					scanf("%d",&n);
					copyFirstNNodes(&head2,&head1,n);	
				       }break;
				case 5:
					exit(0);
					break;
			}
		
		}
	
	}


