
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct OS {
	
		char name[20];
		char founder[20];
		unsigned int year;
		unsigned int noOfVers;
		struct OS *next;

	}OS;

	OS *head = NULL;

	int count() {
	
		int cnt=0;
		OS *tmp =head;

		while(tmp) {
		
			cnt++;
			tmp=tmp->next;
		}
		return cnt;
	}

	void printLL() {
	
		OS *tmp = head;

		while(tmp) {
		
			printf("|%s - %s - %d - %d|",tmp->name,tmp->founder,tmp->year,tmp->noOfVers);

			if(tmp->next)
				printf("->");
			tmp = tmp->next;
		}
	}

	OS* createNode() {
	
		OS *new = (OS*)malloc(sizeof(OS));

		char ch;
		int i=0;

		getchar();

		printf("Enter OS name:");
		scanf("%[^\n]",new->name);

		getchar();
		printf("Enter founder name:");
		scanf("%[^\n]",new->founder);
		

		printf("Enter founded year:");
		scanf("%d",&new->year);
		
		printf("Enter total number of versions:");
		scanf("%d",&new->noOfVers);

		new->next=NULL;

		return new;
	}

	void addFirst() {
	
		OS *new = createNode();

		if(!head)
			head=new;
		else {
			new->next=head;
			head=new;
		}
	}

	void addLast() {
	
		OS *new = createNode();

		if(!head) 
			head = new;
		else {
		
			OS *tmp = head;
			while(tmp->next) 
				tmp=tmp->next;

			tmp->next=new;
		}
	}

	void addAtPos(int pos) {
	
		if(pos<=0 || pos>count()+1) 
			printf("Incorrect position\n");
		else if(pos==1)
			addFirst();
		else if(pos==count()+1)
			addLast();
		else {
		
			OS *new = createNode(),*tmp=head;

			while((pos--)-2)
				tmp = tmp->next;

			new->next = tmp->next;
			tmp->next =new;
		}
	}

	void delFirst() {
	
		if(!head) 
			printf("Linked list is empty\n");
		else {
		
			OS *tmp = head;
			head = tmp->next;
			free(tmp);
		}
	}

	void delLast() {
	
		if(!head) 
			printf("Linked list is empty\n");
		else if(!head->next){ 
			free(head);
			head = NULL;
		}else {
		
			OS *tmp = head;
			while(tmp->next->next)
				tmp=tmp->next;

			free(tmp->next);
			tmp->next = NULL;
		}
	}

	void delAtPos(int pos) {
	
		if(pos<=0 || pos>count())
			printf("Icorrect position\n");
		else if(pos==1)
			delFirst();
		else if(pos==count())
			delLast();
		else {
		
			OS *tmp1 = head;

			while((pos--)-2)
				tmp1 = tmp1->next;

			OS *tmp2 = tmp1->next;
			tmp1->next = tmp2->next;
			free(tmp2);
		}
	}

	void main() {
	
		int ch;

                while(1) {

                        printf("\n1.AddLast\n");
                        printf("2.AddFirst\n");
                        printf("3.AddAtPosition\n");
                        printf("4.PrintList\n");
                        printf("5.DeleteFirst\n");
                        printf("6.DeleteLast\n");
                        printf("7.DeleteAtPos\n");
                        printf("8.Exit\n");

                        printf("\n Select any option from above:");
                        scanf("%d",&ch);


                        switch(ch) {

                                case 1:
                                        addLast();
                                        break;
                                case 2:
                                        addFirst();
                                        break;
                                case 3:{
					int pos=0;
					printf("Enter position:");
					scanf("%d",&pos);
                                        addAtPos(pos);
				       }
                                        break;
                                case 4:
                                        printLL();
                                        break;
                                case 5:
                                        delFirst();
                                        break;
				case 6:
                                        delLast();
                                        break;
                                case 7:{
					int pos=0;
					printf("Enter position:");
					scanf("%d",&pos);
                                        delAtPos(pos);
				       }
                                        break;
                                case 8:
                                        exit(0);
                                        break;

			}
		}
	}

