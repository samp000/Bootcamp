
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

	int countNode() {
	
		int cnt=0;
		Node *tmp = head;

		while(tmp != NULL) {
			tmp = tmp->next;
			cnt++;
		}
	
		return cnt;
	}


	void printRev() {

		Node *tmp1 = head,*tmp2=head;
		int cnt1 = countNode(),i=1;
		int cnt2 = countNode();

		while(cnt1/2-1) {
		
			while(cnt2-1) {
			
				tmp2 = tmp2->next;
				cnt2--;
			}

			
			int tmp = tmp1->data;
			tmp1->data = tmp2->data;
			tmp2->data = tmp;
			
			
			tmp1 = tmp1->next;
			tmp2 = head;	
			cnt2 = countNode()-i;	
			cnt1--;	
		}

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
