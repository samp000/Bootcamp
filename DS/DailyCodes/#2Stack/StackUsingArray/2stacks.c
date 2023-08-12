	
	//2 stacks using 1 array

	#include<stdio.h>
	#include<stdlib.h>

	int size;
	int top1=0,top2=0;	// 2 different top for 2 stacks

	int fph=0;		//flags to decide in which push
	int flg1=0,flg2=0;	//flags to hande conditions in pop()

	int push(int stack[]) {
	
		if(top1 == top2-1) {
		
			return -1;
		}else {
		
			if(fph == 0) {
			
				top1++;
				printf("Enter data:");
				scanf("%d",&stack[top1]);
			}else {
				
				top2--;
				printf("Enter data:");
				scanf("%d",&stack[top2]);
			}

			return 0;
		}
	}

	int pop1(int stack[]) {
	
		if(top1 == -1) {
			flg1 = 1;
			return -1;
		}else {
		
			flg1 = 0;
			return stack[top1--];
		}
	}
	
	int pop2(int stack[]) {
	
		if(top2 == size) {
			flg2 = 1;
			return -1;
		}else {
		
			flg2 = 0;
			return stack[top2++];
		}
	}

	void printStack(int stack[]) {

		printf("\n--------------------------------------------------------------------------------------\n");

		if(top1 == -1) {
		
			printf("Stack1 is empty\n");
		}else {

			printf("Stack 1 is:\n");

			for(int i=top1;i>-1;i--) {
		
				printf("||%-4d||",stack[i]);

				if(i == top1)
					printf("\t<--top");

				printf("\n");
			}

			printf(" -----\n");
		
		}

		if(top2 == size) {
		
			printf("\nStack2 is empty\n");
		}else {

			printf("Stack 2 is:\n");

			for(int i=top2;i<size;i++) {
		
				printf("||%-4d||",stack[i]);

				if(i == top2)
					printf("\t<--top");

				printf("\n");
			}

			printf(" -----\n");
		}

		printf("\n--------------------------------------------------------------------------------------\n");
	}

	void main() {
	
		printf("Enter size of an array:");
		scanf("%d",&size);

		int arr[size];

		top1 = -1;
		top2 = size;

		int ch;

		while(1) {
		
			printf("\n1.Push1\n");
			printf("2.Push2\n");
			printf("3.Pop1\n");
			printf("4.Pop2\n");
			printf("5.Exit\n");

			printf("\nSelect any option:");
			scanf("%d",&ch);

			switch(ch) {
			
				case 1:{
					
					fph = 0;
					int ret = push(arr);
				       	
					if(ret == -1) 
						printf("Stackoverflow 1\n");
				       
					printStack(arr);
				       }
				       break;
			 	case 2:{
				   
					fph = 1;
					int ret = push(arr);
				       	
					if(ret == -1) 
						printf("Stackoverflow 2\n");
				       
					printStack(arr);
				       }
				       break;
				case 3:
				       {
				       	int ret = pop1(arr);
					if(flg1 == 1){
						printf("Stackunderflow 1\n");
					}else {
					
						printf("%d is popped\n",ret);
					}
					
					printStack(arr);

				       }
				       break;
				case 4:{
				       
				       	int ret = pop2(arr);
					if(flg2 == 1){
						printf("Stackunderflow 2\n");
					}else {
					
						printf("%d is popped\n",ret);
					}
					printStack(arr);
				       }
				       break;

				case 5:
				       exit(0);
				       break;
			}
		}
	}
