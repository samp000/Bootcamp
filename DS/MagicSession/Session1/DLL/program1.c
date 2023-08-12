
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Node {
	
		struct Node *prev;
		int data;
		struct Node *next;

	}Node;

	
	Node *head = NULL;
	
	Node *createNode() {
	
		Node *new = (Node*)malloc(sizeof(Node));

		printf("Enter data:");
		scanf("%d",&new->data);

		new->prev = NULL;
		new->next = NULL;

		return new;
	}

	void addNode() {
	
		Node *new = createNode();

		if(head == NULL) {
		
			head = new;
		}else {
		
			Node *tmp = head;

			while(tmp->next != NULL) 
				tmp = tmp->next;

			tmp->next = new;
			new->prev = tmp;
		}

		printf("Node added\n");
	}
	
	void printList() {
	
		Node *tmp = head;

		printf("-------------------------------------------------------\n");
		while(tmp != NULL) {
			printf("|%d|->",tmp->data);
			tmp = tmp->next;
		}
		printf("NULL\n");
		printf("-------------------------------------------------------\n");
	}

	//question 1
	void firstOcc() {
	
		int num;
		printf("Enter number:");
		scanf("%d",&num);

		Node *tmp = head;
		int pos=1;

		while(tmp != NULL) {
		
			if(tmp->data == num)
				break;

			pos++;
			tmp = tmp->next;
		}

		printf("First occurance of %d is at pos %d",num,pos);
		printf("\n-------------------------------------------------------");

	}

	//question 2
	void secondLastOcc() {
	
		int num;
                printf("Enter number:");
                scanf("%d",&num);

                Node *tmp = head;
                int fidx = -1,sidx = -1,pos=1;

		while(tmp != NULL) {
		
			if(tmp->data == num) {
			
				if(fidx == -1) {
				
					fidx = pos;
				}else {
				
					sidx = fidx;
					fidx = pos;
				}
			}

			pos++;
			tmp = tmp->next;
		}

		if(fidx == -1)
			printf("%d is not present in list\n",num);
		else if(sidx == -1)
			printf("%d is present once at position %d\n",num,fidx);
		else
			printf(" second occurance of %d is at position %d\n",num,sidx);

		printf("-----------------------------------------------------------\n");
	}

	//question 3
	void noOfOcc() {
	
		int num;
                printf("Enter number:");
                scanf("%d",&num);

                Node *tmp = head;
                int cnt=0;

		while(tmp != NULL) {
		
			if(tmp->data == num)
				cnt++;

			tmp = tmp->next;
		}

		printf("%d occures in list %d times\n",num,cnt);
		printf("-------------------------------------------------------\n");
	}

	//quetion 4
	
	int digSum(int n) {
	
		int sum=0;

		while(n != 0) {
		
			sum = sum + n%10;
			n = n/10;
		}

		return sum;
	}

	void addNodeEle() {
	
		Node *tmp=head;

		while(tmp != NULL) {
		
			tmp->data = digSum(tmp->data);
			tmp = tmp->next;
		}

		printList();
	}

	//question 5
	
	int isPalindrome(int n) {
	
		int num1=n,num2=0;

		while(n!=0) {
		
			num2 = (num2*10) + n%10;
			n = n/10;
		}

		if(num1 != num2)
			return 0;

		return 1;
	}

	void checkPalindrome() {
	
		Node *tmp = head;
		int pos=1;

		while(tmp != NULL) {
		
			if(isPalindrome(tmp->data))
				printf("Palindrome found at %d\n",pos);



			tmp = tmp->next;
			pos++;
		}
	}


	void main() {
	
		int ch;

		while(1) {

			printf("\n1.addNode\n");
			printf("2.First Occurance\n");
			printf("3.Second Occurance\n");
			printf("4.No of Occurances\n");
			printf("5.Add digits of node elements\n");
			printf("6.Check palindrome\n");
			printf("7.PrintList\n");
			printf("8.Exit\n");

			printf("\nSelect option:");
			scanf("%d",&ch);

			switch(ch) {

				case 1:
					addNode();
					break;
				case 2:
					firstOcc();
					break;
				case 3:
					secondLastOcc();
					break;
				case 4:
					noOfOcc();
					break;
				case 5:
					addNodeEle();
					break;
				case 6:
					checkPalindrome();
					break;
				case 7:
					printList();
					break;
				case 8:
					exit(0);
					break;
				default:
					printf("Enter correct choice\n");
			}
		}
	}
	
