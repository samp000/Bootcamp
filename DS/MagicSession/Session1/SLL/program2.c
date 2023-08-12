
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	typedef struct node {
	
		char str[20];
		struct node *next;
	}node;

	node *head = NULL;
	

	node *createNode() {
	
		node *new = (node*)malloc(sizeof(node));
		printf("ENter string:");
		getchar();

		scanf("%[^\n]",new->str);
		new->next = NULL;

		return new;
	}

	void addNode() {
	
		node *new = createNode();

		if(head == NULL) {
		
			head = new;
		
		}else if(head -> next == NULL) {
		
			head->next = new;
		
		}else {
		
			node *tmp = head;

		       while(tmp->next != NULL)
			       tmp = tmp->next;

		    tmp->next = new;   
		}
	}

	void printList() {
	
		node *tmp = head;


		printf("-------------------------------------------------------------------------------\n");

		while(tmp != NULL) {
		
			printf("|%s|->",tmp->str);

			tmp = tmp->next;
		}
		printf("NULL\n");
		printf("-------------------------------------------------------------------------------\n");
	}

	int mystrlen(char *s) {
	
		int cnt=0;

		while(*s!='\0') {
		
			cnt++;
			s++;
		}

		return cnt;
	}

	//question 6
	void strOfGivenSz() {
	
		int size;
		printf("Enter size of string:");
		scanf("%d",&size);

		node *tmp = head;

		printf("\n-------------------------------------------\n");
		while(tmp!= NULL) {
		
			if(size == mystrlen(tmp->str))
				printf("%s\n",tmp->str);

			tmp = tmp->next;
		}
		printf("\n-------------------------------------------\n");
	}

	//question 7
/*
	 char* strrev( char *str) {

                char *tmp=str;

                while(*str!='\0') {
                        str++;
                }

                str--;



                while(tmp < str) {


                        char x = *tmp;

                        *tmp = *str;
                        *str = x;

                        tmp++;
                        str--;
                }

                return str;

        }

	*/

	char *mystrrev(char *str) {
	
		int i = strlen(str)-1, j=0;

		char ch;

		while(i > j) {
		
			ch = str[i];
			str[i] = str[j];
			str[j] = ch;
			i--;
			j++;
		}
		return str;
	}


	void revNodeData() {
	
		node *tmp = head;

		while(tmp != NULL) {

			strcpy(tmp->str , mystrrev(tmp->str));
			tmp = tmp->next;
		}

		printList();
	}

	//question 8

	int countNodes() {
	
		node *tmp = head;
		int cnt=0;

		while(tmp!=NULL) {
		
			cnt++;
			tmp = tmp->next;
		}

		return cnt;
	}

	void deleteFirst() {
		node *tmp = head;
		head = tmp->next;
		free(tmp);
	}

	void deleteLast() {
	
		if(head -> next == NULL) {
			deleteFirst();
		}else {
		
			node *tmp = head;

			while(head->next->next != NULL) 
				tmp = tmp->next;

			free(tmp->next);
			tmp->next = NULL;
		}
	}

	void deleteAtPos(int pos) {
	
		if(pos == 1) {
		
			deleteFirst();
		}else if(pos == countNodes()) {
		
			deleteLast();
		}else {
		
			node *tmp1 = head,*tmp2=NULL;
		
			while((pos--)-2)
				tmp1 = tmp1->next;

			tmp2 = tmp1->next;
			tmp1->next = tmp2->next;
			free(tmp2);
		}

	}
	
	void keepNodeWithGivenSize() {

		int pos=1,cnt = countNodes();
		node *tmp = head;

		int size;
		printf("Enter size of string to keep:");
		scanf("%d",&size);

		while(tmp != NULL) {
		
			if(size != strlen(tmp->str)) {
			
				deleteAtPos(pos);
				cnt--;
				pos--;

			}
			
			pos++;
			tmp = tmp->next;
		}

		printList();
	}

	
	void main() {
	
		int ch;
		
		while(1) {
		
			printf("1.addNode\n");
			printf("2.printList\n");
			printf("3.print String of given size\n");
			printf("3.delete nodes with string which have not given size\n");
			printf("5.Reverse node data\n");
			printf("6.exit\n");

			printf("\nSelect option from above:");
			scanf("%d",&ch);

			switch(ch) {
			
				case 1:
					addNode();
					break;
				case 2:
					printList();
					break;
				case 3:
					strOfGivenSz();
					break;
				case 4:
					revNodeData();
					break;
				case 5:
					keepNodeWithGivenSize();
					break;
				case 6:
					exit(0);
					break;

			}
		}
	}
