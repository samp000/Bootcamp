
	#include<stdio.h>
	
	void* malloc(size_t);


	typedef struct Employee{
	
		char name[20];
		int id;
		struct Employee *next;
	}Emp;

	Emp* head=NULL;

	Emp * createNode() {
	
		Emp *newNode = (Emp*)malloc(sizeof(Emp));
		
		printf("------------------------------------------------------------------\n");

		printf("Enter name:");
		char c=0;
		int i=0;

		getchar();
/*		
		while((c=getchar())!='\n') {
		
			(*newNode).name[i++] = c;
		}
*/

		scanf("%[^\n]",newNode->name);

		printf("Enter id:");
		scanf("%d",&newNode->id);
		printf("------------------------------------------------------------------\n");

		newNode->next=NULL;

		return newNode;

	}

	void addNode() {
	
		Emp *newNode = createNode();

		if(head == NULL)
			head = newNode;
		else {
		
			Emp *tmp = head;

			while(tmp->next != NULL)
				tmp = tmp->next;

			tmp->next = newNode;
		}
	}

	void printList() {
	
		Emp *tmp = head;

		while(tmp != NULL) {
		
			printf("|%s__%d|->",tmp->name,tmp->id);
			tmp = tmp->next;
		}

		printf("NULL\n");
	}

	void addAtFirst() {

		Emp *newNode = createNode();

		if(head != NULL)
			newNode->next = head;

		head = newNode;
	}

	void addAtPos() {
	
		if(head == NULL) 
			addNode();
		else {
	
			int pos;
			printf("Enter position to add new node:");
			scanf("%d",&pos);

			Emp *newNode = createNode();
			Emp* tmp = head;
			while(pos-2) {
			
				tmp = tmp->next;
				pos--;
			}

			newNode->next = tmp->next;
			tmp->next = newNode;
		}
	}

	void main() {
	
		int n;
		printf("Enter no of nodes you want to create:");
		scanf("%d",&n);

		for(int i=0;i<n;i++)
			addNode();

		printList();
		
		addAtFirst();
	
		printList();
		
		addAtPos();		//adding node at 3rd position

		printList();

	}
