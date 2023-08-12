	
	//queue using linked list(circuler SLL)
	
	
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Node {
	
		int data;
		struct Node *next;
	}Node;

	Node *front = NULL, *rear = NULL;
	int cnt=0;	//no of nodes present in queue
	int size=0;	//size of queue
	int flg=0;

	Node *createNode() {
	
		Node *newNode = (Node*)malloc(sizeof(Node));

		printf("Enter data:");
		scanf("%d",&newNode->data);

		newNode->next = NULL;

		return newNode;
	}

	void addNode() {
	
		Node *newNode = createNode();

		if(front == NULL) {
		
			front = rear = newNode;
			newNode->next = front;
		}else {
		
			rear->next = newNode;
			newNode->next = front;
			rear = newNode;
		}
	}

	int enqueue() {
	
		if(cnt == size) {
		
			return -1;
		}else {
		
			addNode();
			cnt++;

			return 0;
		}
	}

	int dequeue() {
	
		if(front == NULL) {
			
			flg=0;	
			return -1;
		}else {
		
			flg=1;
			int data = front->data;

			if(front == rear) {
			
				free(front);
				front = rear = NULL;
			}else {
				
				front = front->next;
				free(rear->next);
				rear->next = front;
			}

			cnt--;
			return data;
		}
	}
	
	int frontt() {
	
		if(front == NULL) {
		
			return -1;
		}else {
		
			return front->data;

		}
	}

	int printQueue() {
	
		if(front == NULL) {
		
			return -1;
		}else {
		
			Node *tmp = front;

			if(front->next != front) {

				while(tmp->next != front) {
			
					printf("|%d|",tmp->data);
					tmp = tmp->next;
				} 

			}
				
			printf("|%d|",tmp->data);		//if there is only one node
			
			printf("\n");

			return 0;
		}
	}



	void main() {

		printf("Enter size of queue:");
		scanf("%d",&size);

		int ch;

		while(1) {

			printf("\n1.Enqueue\n");
			printf("2.Dequeue\n");
			printf("3.Front\n");
			printf("4.printQueue\n");
			printf("5.Exit\n");

			printf("\nSelect any option:");
			scanf("%d",&ch);

			switch(ch) {

				case 1:{
					int ret = enqueue();

				       	if(ret == -1)
						printf("Queue is full\n");

				       }
					break;
				case 2:{
					int ret = dequeue();

					if(flg == 1) {

						printf("\n%d is removed\n",ret);
					}else {
					
						printf("Queue is empty\n");
					}

					printf("========================");

				       }
					break;
				case 3:
					int ret = frontt();
					if(front != NULL)
						printf("\n%d is at front of queue\n",ret);
					else
						printf("Queue is empty\n");

						printf("========================");
					break;
				case 4:{
				       
					int ret = printQueue();
				       	if(ret == -1)
						printf("Queue is empty\n");
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
	
