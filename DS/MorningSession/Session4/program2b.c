
	//finding is linked list palindrome "2st approch(slow and fast pointer)"
	
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Node {
	
		int data;
		struct Node *next;

	}Node;

	Node *head = NULL;

	int countNodes() {
	
		Node *tmp=head;
		int cnt=0;

		while(tmp != NULL) {
		
			cnt++;
			tmp=tmp->next;
		}

		return cnt;
	}

	Node *createNode() {
	
		Node *newNode = (Node*)malloc(sizeof(Node));

		printf("Enter data:");
		scanf("%d",&newNode->data);

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
		
		}
	}
	
	void printList(Node *head) {
	
		Node *tmp=head;

		printf("-------------------------------------------------------\n");

		while(tmp != NULL) {
		
			printf("|%d|->",tmp->data);
			tmp=tmp->next;
		}
		printf("NULL\n");
		printf("-------------------------------------------------------\n");
	}

	Node *midNode() {

		if(head == NULL) {
		
			return NULL;
		}else {
		
			Node *slowptr = head,*fastptr = head->next;

			while(fastptr != NULL && fastptr->next != NULL) {
			
				fastptr = fastptr -> next ->next;
				slowptr = slowptr -> next;
			}

			return slowptr;
		}
	}

	Node *revList(Node *head) {
	
		Node *tmp1 = NULL ,*tmp2 = NULL;

		while(head != NULL) {

			tmp2 = head->next;
			head->next = tmp1;
			tmp1 = head;
			head = tmp2;
		}

		head = tmp1;

		return head;
	}
	
	int isListPalindrome() {
	
		if(head == NULL) {
			return -1;
		}else if(head->next == NULL || head->next->next == NULL) {
		
			return 1;
		}else {
		
			Node *mid = midNode();
			mid->next = revList(mid->next);		//reversing half list 
			
			Node *ptr1 = head ,*ptr2 = mid->next;

			while(ptr2 != NULL) {
			
				if(ptr1->data != ptr2->data)
					return 0;

				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			}
			
			mid->next = revList(mid->next);		//agin reversing list from mid(to its original form)

			return 1;
		}
	}

	void main() {

		int ch;

		while(1) {

			printf("\n1.AddNode\n");
			printf("2.PrintList\n");
			printf("3.Mid Node\n");
			printf("4.Is list Palindrome\n");
			printf("5.Exit\n");

			printf("\n Select any option from above:");
			scanf("%d",&ch);


			switch(ch) {

				case 1:
					addNode();
					break;
				case 2:
					printList(head);
					break;
				case 3:{
					Node *mid = midNode();
				
					if(mid == NULL)
						printf("List is empty\n");
					else
						printf("%d is at mid of list\n",mid->data);
				       }
				       break;
				case 4:
				        int ret = isListPalindrome();

					if(ret) {
					
						printf("List is palindrome\n");
					}else {
					
						printf("List is not palindrome\n");
					}

				       break;
				case 5:
					exit(0);
					break;
				default:
					printf("Enter correct option\n");
			}
		}

	}
