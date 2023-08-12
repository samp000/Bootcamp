
	#include<stdio.h>
	#include<stdlib.h>

	typedef struct Movie{
	
		char name[20];
		int cnt;
		float price;
	}Mov;

	int top = -1,flg=0; 
	int size;

	void printStack(Mov stack[]) {
	
		printf("\nElements in stack are:\n\n");

		for(int i=top;i>=0;i--) {
		
			printf("|| %-10s | %-3d | %-4.1f ||",stack[i].name,stack[i].cnt,stack[i].price);
			
			if(top == i)		
				printf("  \t<--top");
			printf("\n");
		}

		printf(" ----------------------------\n\n");
	}

	int push(Mov stack[]) {
	
		if(top == size-1) {
		
			printStack(stack);
			
			printf("Stack overflow\n");
			return -1;
		}else {

			top++;

			getchar();

			printf("Enter movie name :");
			scanf("%[^\n]",stack[top].name);
			
			printf("Enter no of tickets:");
			scanf("%d",&stack[top].cnt);
			
			printf("Enter ticket price:");
			scanf("%f",&stack[top].price);

			if(flg == 1)
				flg = 0;

			printStack(stack);	
			return 0;
		}
	}

	int pop(Mov stack[],Mov **ret) {
	
		if(top == -1) {
		
			flg = 1;

			printf("\nStack underflow\n");
			return -1;
		}else {
		
			*ret = &stack[top];	//whole structure is returned out parameter "ret"
			top--;
			return top;		//top of stack is returned
		}
	}
	
	int peek(Mov stack[],Mov **ret) {
	
		if(top == -1) {
		
			flg=1;
			printf("Stack is empty\n");
			return -1;
		}else {
			
			*ret = &stack[top];	//whole structure is returned out parameter "ret"
			return top;
		}
	}

	void main(){
	
	
		printf("Enter size of stack:");
		scanf("%d",&size);

		Mov stack[size] ,*ret;
		int ch;

		while(1) {
		
			ret = NULL;

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
					int ret1 = pop(stack,&ret);
				
					if(flg == 0){

						printf("|| %-10s | %-3d | %-4.1f ||",ret->name,ret->cnt,ret->price);
						printf("  is popped\n");
					}
					
					printf(" ==========================\n");

				       }
					break;
				case 3:
					int ret1 = peek(stack,&ret);
					if(flg==0){
						printf("Data at top of stack is:\n");
						printf("|| %-10s | %-3d | %-4.1f ||",ret->name,ret->cnt,ret->price);
					printf("\n ==========================\n");
					
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
