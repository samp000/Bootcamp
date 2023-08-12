
	#include<stdio.h>

	int top = -1 ,arr[5];

	void push(int data) {
	
		arr[++top] = data;
	}

	void printStack() {
	
		printf("\nElements in stack are:\n");

		for(int i=top;i>=0;i--) {
		
			printf("|%d| ",arr[i]);
		}

		printf("\n\n");
	}

	void main(){

		push(10);
		push(20);
		push(30);
		push(40);
		push(50);

		printStack();
	}
