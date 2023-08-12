
 	#include<stdio.h>
        #include<stdlib.h>

        typedef struct Node {

                struct Node* prev;
                int data;
                struct Node* next;

        }Node;

        Node *head = NULL;

        Node *createNode() {

                Node *newNode = (Node*)malloc(sizeof(Node));
                printf("Enter data:");
                scanf("%d",&newNode->data);

                newNode->prev = NULL;
                newNode->next = NULL;

                return newNode;
        }
	

	void addNode() {
	
		Node *newNode = createNode();

		if(head == NULL)
			head = newNode;
		else {
		
			Node *tmp = head;

			while(tmp->next != NULL)
				tmp = tmp->next;

			tmp->next = newNode;
			newNode->prev = tmp;
		}
	}

	void printList() {

                Node* tmp = head;

                printf("-------------------------------------------------\n");
                while(tmp != NULL) {

                        printf("|%d|->",tmp->data);
                        tmp=tmp->next;
                }
                printf("NULL\n");
                printf("-------------------------------------------------\n");
        }


	void printRev() {
	
		Node *tmp = head;

		while(tmp->next != NULL)
			tmp = tmp->next;

		while(tmp != NULL) {
		
			printf("|%d|->",tmp->data);
			tmp=tmp->prev;
		}

		printf("NULL\n");


	}

	void main() {

		int n;
		printf("Enter no of nodes:");
		scanf("%d",&n);

		for(int i=0;i<n;i++)
			addNode();

		printList();

		printRev();
		
		printList();
	}
