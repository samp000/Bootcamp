
	#include<stdio.h>
	#include<stdlib.h>
	

	typedef struct Node {
	
		int data;
		struct Node *next;

	}Node;

	Node *front = NULL,*rear = NULL;
	int flg=0;

	int printQueue() {
	
		if(front == NULL) {
			return -1;
		}else {
		
			Node *tmp1 = front;
		
			while(tmp1 != NULL) {
			
				printf("|%d|",tmp1->data);
				tmp1 = tmp1->next;
			}	
			printf("\n");

			return 0;
		}
	}

	Node *createNode()  {
	
		Node *newNode = (Node*)malloc(sizeof(Node));

		if(newNode == NULL) {
		
			printf("Memory full\n");	//heap memory full
			exit(0);
		}

		printf("Enter data:");
		scanf("%d",&newNode->data);

		newNode->next = NULL;

		return newNode;
	}
	

	void enqueue() {

		Node *newNode = createNode();

		if(front == NULL) {
		
			front = rear = newNode;
		}else {
		
			rear->next = newNode;
			rear = newNode;
		}

		printQueue();
	}

	int dequeue() {
	
		if(front == NULL) {
			flg = 1;
			return -1;
		}else {
		
			flg=0;
			
			int ret = front->data;
			if(front == rear) {		//if there is only one queue element
				free(front);
				front = rear = NULL;
			}else {			
				Node *tmp = front;
				front = front->next;
				free(tmp);
			}


			printQueue();
			return ret;
		}
	}

	int frontt() {
	
		if(front == NULL) {
			flg = 1;
			return -1;
		}else {
			return front->data;
		}
	}

	void main() {

		int ch;

		while(1) {
		
			printf("\n1.Enqueue\n");
			printf("2.Dequeue\n");
			printf("3.Front\n");
			printf("4.PrintQueue\n");
			printf("5.Exit\n");

			printf("\nSelect any option:");
			scanf("%d",&ch);

			switch(ch) {
			
				case 1:
					enqueue();
					break;
				case 2:{

					int ret = dequeue();
				
					if(flg == 1) {
						
						printf("Queue underflow\n");
					}else{
						printf("\n%d is removed\n",ret);
						printf("========================");

					}

				       }
					break;
				case 3:{
					int ret = frontt();
					if(flg == 1){
						
						printf("Queue is empty\n");
					}else{
						printf("\n%d is at front of queue\n",ret);
						printf("========================");
					}
				       }
					break;
				case 4:{
				       	int ret = printQueue();

					if(ret == -1) {
					
						printf("Queue is empty\n");
					}
				       }
					break;
				case 5:
					exit(0);
					break;
				
				default:
					printf("Enter correct choice\n");

			}
		}

	}
