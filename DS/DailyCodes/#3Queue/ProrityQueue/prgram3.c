
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Node {
	
		int data;
		int priority;
		struct Node *next;

	}Node;

	Node *front = NULL,*rear=NULL;

	int cnt=0,size,flg=0;

	Node *createNode() {
	
		Node *newNode = (Node*)malloc(sizeof(Node));

		printf("Enter data:");
		scanf("%d",&newNode->data);
		printf("Enter priority:");
		scanf("%d",&newNode->priority);

		if(newNode->priority < 0 || newNode->priority>5 ) {
		
			printf("Entered Invalid priority!..");
			printf("Enter data again\n");
			free(newNode);			//freeing node cause we are going to call createNode()
			createNode();
		}else {
			newNode->next = NULL;
			return newNode;
		}
	}

	void addNode(Node *newNode) {
	
		if(front == NULL) 
			front = rear = newNode;
		else {
			rear->next = newNode;
			rear = newNode;
		}
	}

	void addFirst(Node *newNode) {
	
		if(front == NULL) 
			front = rear = newNode;
		else {
			newNode->next = front;
			front = newNode;
		}
	}


	void addAtPos(int pos ,Node *newNode) {


		if(pos == 1)
			addFirst(newNode);
		else if(pos ==  cnt+1 ) {
			addNode(newNode);
		}else {
			Node *tmp = front;

			while(pos-2) {
			
				tmp=tmp->next;
				pos--;
			}

			newNode->next = tmp->next;
			tmp->next = newNode;
		}
	}

	int enqueue() {
	
		if(cnt == size) {
		
			return -1;
		}else {


			cnt++;
			Node *newNode = createNode();
			int pos = 1;

			if(front == NULL) {
		
				addFirst(newNode);
			}else {
		
				Node *tmp = front;
				while(tmp != NULL) {
			
					if(tmp->priority <= newNode->priority){
				
						tmp = tmp->next;
						pos++;
					}else 
						break;
				}

				addAtPos(pos,newNode);
			}

			return 0;
		}	
	}

	void printQueue() {
	
		Node *tmp=front;

		printf("-------------------------------------------------------\n");

		while(tmp != NULL) {
		
			printf("|%d|->",tmp->data);
			tmp=tmp->next;
		}
		
		printf("NULL\n");
		printf("-------------------------------------------------------\n");
	}	

	int dequeue() {
	
		if(front == NULL) {
		
			flg=0;
			return -1;
		}else {
	
			cnt--;	
			flg=1;
			int data = front->data;
			Node *tmp = front;
			front = tmp->next;
			free(tmp);
			return data;
		}
	}

	void main() {	

		printf("Enter size of queue:");
		scanf("%d",&size);
		
		int ch;

		while(1) {
		
			printf("\n1.Add\n");
			printf("2.Delete\n");
			printf("3.PrintList\n");
			printf("4.Exit\n");

			printf("\n Select any option from above:");
			scanf("%d",&ch);


			switch(ch) {
			
				case 1:{
					int ret = enqueue();

					if(ret == -1)
						printf("\nError: Queue overflow\n");

				        printQueue();	
				       }
					break;
				case 2:{
					int ret = dequeue();

					if(flg == 0)
						printf("\nError: Queue underflow\n");
				        else 
						printf("\n%d is removed fronm queuew\n",ret);
				      
				        printQueue();	
				       }
					break;
				case 3:
					printQueue();
					break;	
				case 4:
					exit(0);
					break;
			}
		}

	}


