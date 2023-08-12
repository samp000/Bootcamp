
	#include<stdio.h>
	#include<stdlib.h>

	int top = -1 , flg = 0;
	int size;

	void printStack(int stack[]) {
	
		printf("\nElements in stack are:\n\n");

		for(int i=top;i>=0;i--) {
		
			printf("||%d||",stack[i]);
			
			if(top == i)		
				printf("\t<--top");
			printf("\n");
		}

		printf(" ----\n\n");
	}

	int push(int stack[]) {
	
		if(top == size-1) {
		
			printf("Stack overflow\n");
			printStack(stack);
			return -1;
		}else {

			printf("Enter data in stack:");
			
			top++;
			scanf("%d",&stack[top]);
		
			if(flg == 1)
				flg = 0;
				
			printStack(stack);	
			return 0;
		}
	}

	int pop(int *stack) {
	
		if(top == -1) {
		
			printf("\nStack underflow\n");
			flg=1;
			return -1;
		}else {
		
			int ret = *(stack+top);
			top--;
			printStack(stack);
			return ret;
		}
	}
	
	int peek(int stack[]) {
	
		if(top == -1) {
		
			flg=1;		
			printf("Stack is empty\n");
			return -1;
		}else {
		
			return stack[top];
		}
	}

	void main(){
	
		printf("Enter size of stack:");
		scanf("%d",&size);

		int stack[size] , ch;

		while(1) {
		
			printf("\n1.Push\n");
			printf("2.Pop\n");
			printf("3.Peek\n");
			printf("4.Exit\n");

			printf("\nSelect any option:");
			scanf("%d",&ch);

			switch(ch) {
			
				case 1:
					push(stack);
					break;
				case 2:{
					int ret = pop(stack);
				
					if(flg==0) {

						printf("\n%d is popped\n",ret);
					}
					
					printf("========================");

				       }
					break;
				case 3:
					int ret = peek(stack);
					if(flg == 0){
						printf("\n%d is at top of stack\n",ret);
						printf("========================");
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
