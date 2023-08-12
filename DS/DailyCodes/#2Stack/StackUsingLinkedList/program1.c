
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Node {
	
		int data;
		struct Node *next;

	}Node;

	Node *head = NULL,*top=NULL;
	int flg=0;
	int count=0;	//count of present stack frames
	int size=0;	//size of stack

	Node *createNode()  {
	
		Node *newNode = (Node*)malloc(sizeof(Node));

		printf("Enter data:");
		scanf("%d",&newNode->data);

		newNode->next = NULL;

		return newNode;
	}
	
	void addNode() {
	
		Node *newNode = createNode();

		if(head == NULL) {
			head = newNode;
		}else {
		
			Node *tmp = head;

			while(tmp->next != NULL)
				tmp = tmp -> next; 

			tmp->next = newNode;
		}
		
		top = newNode;

	}

	int push() {

		if(count == size)
			return -1;

		addNode();
		count++;
		return 0;
	}

	int pop() {
	
		if(head == NULL) {
			flg = 1;
			return -1;
		}else {
		
			flg=0;
			int ret = top->data;
			if(head == top) {		//if there is only one stack frame
				free(head);
				top = head = NULL;
			}else {			

				//traversing to 2nd last stack frame and deleting last frame
				top = head;	
				while(top->next->next != NULL)		
					top = top->next;
				free(top->next);
				top->next = NULL;
			}


			count--;		//reducing total stack frame count
			return ret;
		}
	}

	int peek() {
	
		if(head == NULL) {
			flg = 1;
			return -1;
		}else {
			return top->data;
		}
	}

	void main() {

		printf("Enter size of stack:");
		scanf("%d",&size);

		int ch;

		while(1) {
		
			printf("\n1.Push\n");
			printf("2.Pop\n");
			printf("3.Peek\n");
			printf("4.Exit\n");

			printf("\nSelect any option:");
			scanf("%d",&ch);

			switch(ch) {
			
				case 1:{
					int ret = push();

				       	if(ret == -1)
						printf("Stackoverflow\n");
				      
				       }
					break;
				case 2:{

					int ret = pop();
				
					if(flg == 1) {
						
						printf("Stackunderflow\n");
					}else{
						printf("\n%d is popped\n",ret);
						printf("========================");

					}

				       }
					break;
				case 3:{
					int ret = peek();
					if(flg == 1){
						
						printf("Stack is empty\n");
					}else{
						printf("\n%d is at top of stack\n",ret);
						printf("========================");
					}
				       }
					break;
				case 4:
					exit(0);
					break;
				
				default:
					printf("Enter correct choice\n");

			}
		}

	}
