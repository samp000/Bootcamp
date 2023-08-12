
	#include<stdio.h>
	#include<stdlib.h>
		
	int size,front=-1,rear=-1;
	int flg=0;

	int enqueue(int queue[]) {
	
		if((rear == size-1 && front == 0) || (rear == front-1)) {
		
			return -1;
		}else {
		
			if(front == -1) {
			
				front++; 
			}
			rear = ++rear % size;
			printf("Enter data:");
			scanf("%d",&queue[rear]);
		
			printf("front:%d\nrear:%d\n",front,rear);
			
			return 0;
		}
	}

	int dequeue(int queue[]) {
	
		if(front == -1) {
			flg=0;		
			return -1;
		}else {
		
			flg=1;
			int val = queue[front];

			if(front == rear) 
				front = rear = -1;
			else
				front = ++front % size;

			printf("front:%d\nrear:%d\n",front,rear);
			
			return val;
		}
	}

	int frontt(int queue[]){
	
		if(front == -1) {
		
			flg = 0;
			return -1;
		}else {
		
			flg=1;
			return queue[front];
		}
	}

	int printQueue(int queue[]) {
	
		if(front == -1) {
		
			return -1;
		}else {
		
			/*
			if(front <= rear) {
				
				for(int i=front;i<=rear;i++) 			
					printf("|%d|",queue[i]);
			}else {
			
				for(int i=front;i<=size-1;i++) 			
					printf("|%d|",queue[i]);

				for(int i=0;i<=rear;i++) 			
					printf("|%d|",queue[i]);
			}
			*/

			int i=front;
			while(i != rear) {
			 
				printf("|%d|",queue[i]);
				i = ++i % size;
			}
			printf("|%d|",queue[i]);

			printf("\n");
			return 0;
		}
	}

	void main(){

		printf("Enter size of queue:");
		scanf("%d",&size);

		int queue[size] , ch;

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
					int ret = enqueue(queue);

				       	if(ret == -1)
						printf("Queue is full\n");

				       }
					break;
				case 2:{
					int ret = dequeue(queue);

					if(flg==1) {

						printf("\n%d is removed\n",ret);
					}else {
					
						printf("Queue is empty\n");
					}

					printf("========================");

				       }
					break;
				case 3:
					int ret = frontt(queue);
					if(flg == 1){
						printf("\n%d is at front of queue\n",ret);
						printf("========================");
					}
					break;
				case 4:{
				       
					int ret = printQueue(queue);
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
