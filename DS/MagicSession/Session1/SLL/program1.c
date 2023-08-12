
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct node {
	
		int data;
		struct node *next;
	}node;

	node *head=NULL;

	node *createNode() {
	
		node *new = (node*)malloc(sizeof(node));
		printf("Enter number:");
		scanf("%d",&new->data);
		new->next=NULL;

		return new;
	}

	void addNode() {
	
		node *new = createNode();

		if(head == NULL) {
		
			head = new;
		}else {
		
			node *tmp = head;

			while(tmp->next != NULL) 
				tmp = tmp->next;

			tmp->next = new;
		}
	}

	//question 1
	
	void firstOcc() {	
		int num;
		printf("Enter number:");
		scanf("%d",&num);

		int pos=0;
		node *tmp = head;
			
		while(tmp != NULL) {
		
			pos++;
			if(tmp->data == num)
				break;

			tmp = tmp->next;
		}

		printf("\n%d is first occured at %d\n",num,pos);
	}

	//question 2
	
	void secondLastOcc() {
	
		int num;
		printf("Enter number:");
		scanf("%d",&num);

		node* tmp = head;

		int fidx=-1,sidx=-1,pos=1;

		while(tmp != NULL) {
		
			if(num == tmp->data) {
			
				if(fidx == -1)
					fidx = pos;
				else {
				
					sidx = fidx;
					fidx = pos;
				}
			}
			pos++;
			tmp = tmp->next;
		}

		if(fidx == -1)
			printf("\n%d is not present\n",num);
		else if(sidx == -1)
			printf("\n%d is present once at %d\n",num,fidx);
		else
			printf("\n2nd last occurance of %d is present at %d\n",num,sidx);
	}

	//question 3
	
	
	void noOfOcc() {	
		int num;
		printf("Enter number:");
		scanf("%d",&num);

		int cnt=0;
		node *tmp = head;
			
		while(tmp != NULL) {
		
			if(tmp->data == num)
				cnt++;

			tmp = tmp->next;
		}

		printf("\n%d is occured %d times\n",num,cnt);
	}

	//question 4

	void printList() {
	
		node *tmp = head;

		while(tmp != NULL) {
		
			printf("|%d|->",tmp->data);
			tmp = tmp->next;
		}

		printf("NULL\n");
	}

	int addDig(int n) {
	
		int sum=0;
		while(n!=0) {
		
			sum+=n%10;
			n = n/10;
		}

		return sum;
	}


	void addNodeEle() {
	
		node *tmp = head;

		while(tmp != NULL) {
		
			tmp->data = addDig(tmp->data);
			tmp = tmp->next;
		}

		printList();
	}

	//question 5
	
	int isPalindrome(int n) {
	

		int num1=n,num2=0;

		while(n!=0) {
		
			num2 = (num2*10) + n%10;
			n/=10;
		}

		if(num2 == num1)
			return 1;

		return 0;
	}

	void checkPalindrome() {
	
		node *tmp = head;
		int pos=1;

		while(tmp!= NULL) {
		
			if(isPalindrome(tmp->data)) {
			
				printf("Palindrome found at %d\n",pos);
			}
			pos++;
			tmp = tmp->next;
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
			}
		
		}
	
	}



