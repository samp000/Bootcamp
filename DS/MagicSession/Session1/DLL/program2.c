
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	typedef struct Node {
	
		struct Node *prev;
		char str[20];
		struct Node *next;
	}Node;

	Node *head = NULL;

	Node *createNode() {
	
		Node *new = (Node*)malloc(sizeof(Node));

		getchar();
		printf("Enter string:");

		char ch;
		int i=0;

		while((ch=getchar()) != '\n') {
			(*new).str[i] = ch;
			i++;
		}

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
	}

	void printList() {
	
		Node *tmp = head;

		printf("-----------------------------------------------------------\n");

		while(tmp != NULL) {
		
			printf("|%s|->",tmp->str);
			tmp = tmp->next;
		}
		printf("NULL\n");
		printf("-----------------------------------------------------------\n");
	}

	//question 1
	int mystrlen(char *str) {
	
		int cnt=0;

		while(*str != '\0') {
		
			cnt++;
			str++;
		}

		return cnt;
	}

	void strOfGivenSz() {
	
		int sz;
		printf("Enter size:");
		scanf("%d",&sz);

		Node *tmp = head;

		while(tmp != NULL) {
			
			if(sz == mystrlen(tmp->str))
				printf("%s\n",tmp->str);

			tmp = tmp->next;
		}
	}

	//question 2
	
	char * mystrrev(char *str) {
	
		int i=0,j = mystrlen(str)-1;

		char ch;

		while(i < j) {
		
			ch = str[i];
			str[i] = str[j];
			str[j] = ch;

			i++;
			j--;
		}

		return str;
	}

	void revNodeData() {
	
		Node *tmp = head;

		while(tmp != NULL) {
		
			strcpy(tmp->str,mystrrev(tmp->str));
			tmp = tmp->next;
		}

		printList();
	}

	//question 8

        int countNodes() {

                Node *tmp = head;
                int cnt=0;

                while(tmp!=NULL) {

                        cnt++;
                        tmp = tmp->next;
                }

                return cnt;
        }

	void deleteFirst() {
                
		if(head->next == NULL) {
		
			free(head);
			head = NULL;

		}else {

			head = head->next;
                	free(head->prev);
			head->prev = NULL;
		}
        }

	void deleteLast() {

                if(head -> next == NULL) {
                        free(head);
			head = NULL;
                }else {

                        Node *tmp = head;

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

                        Node *tmp= head;

                        while((pos--)-2)
                                tmp = tmp->next;

                        tmp->next = tmp->next->next;
			free(tmp->next->prev);
                        tmp->next->prev = NULL;
                }

        }


	void keepNodeWithGivenSize() {

                int pos=1,cnt = countNodes();
                Node *tmp = head;

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
                        printf("4.Reverse node data\n");
                        printf("5.delete nodes with string which have not given size\n");
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

