
	#include<stdio.h>
	#include<stdlib.h>

	struct Demo {
	
		int data;
		struct Demo *next;
	};


	struct Demo *head = NULL;

	struct Demo* createNode() {

		struct Demo *newNode = (struct Demo*)malloc(sizeof(struct Demo));
		printf("\nEnter data:");
		scanf("%d",&newNode->data);

		newNode->next = NULL;

		return newNode;
	}

	void addNode() {

		struct Demo *newNode = createNode();

		if(head == NULL) {
			head = newNode;
		}else {
		
			struct Demo *tmp = head;

			while(tmp->next != NULL) {
				tmp = tmp->next;
			}

			tmp->next = newNode;
		}
	}

	void printList() {
	
		struct Demo *tmp = head;

		printf("----------------------------------------------------------------\n");

		while(tmp != NULL) {
		
			printf("|%d|-> ",tmp->data);
			tmp=tmp->next;
		}

		printf("NULL\n");
		printf("----------------------------------------------------------------\n");
	}

	void find2ndOccu() {
	
		int num;
		printf("Enter number whose 2nd occurance want to find:");
		scanf("%d",&num);

		int fidx=-1,sidx=-1;		//first index to store last occurance second index to store 2nd last occurance
		int pos=1;

		struct Demo *tmp = head;

		while(tmp != NULL) {
		
			if(num == tmp->data) {
				
				if(fidx == -1) {
				
					fidx = pos;
				
				}else  {
				
					sidx = fidx;
					fidx = pos;
				}

			}

			pos++;
			tmp = tmp->next;
		}

		if(fidx == -1) {
		
			printf("\n%d is not present in linked list\n",num);
		
		}else if(sidx == -1) {
		
			printf("\n%d is occured only once & present at position %d\n",num,fidx);
		
		}else {
		
			printf("\n2nd last occurance of %d is present at position %d\n",num,sidx);
		}
		printf("-------------------------------------------------------------------\n");

	}

	void main(){
	
		int ch;

		while(1) {
		
			printf("\n1.Add Node\n");
			printf("2.Print List\n");
			printf("3.Find 2nd Last Occurance of Number\n");
			printf("4.Exit\n");

			printf("\nSelect any option from above:");
			scanf("%d",&ch);

			switch(ch) {
			
				case 1:
					addNode();
					break;

				case 2:
					printList();
					break;

				case 3:
					find2ndOccu();
					break;

				case 4:
					exit(0);
					break;

				default:
					printf("Select correct option\n");
					break;
			}
		}

	}	
	
