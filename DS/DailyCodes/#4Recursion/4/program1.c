
	//to find number of steps to make number zero 

	#include<stdio.h>

	int countSteps(int n) {

		if(n == 0)
			return 0;

		if(n%2 == 0)
			return 1 + countSteps(n/2);	//if number is even

		return 1 + countSteps(n-1);		//if number is odd
	}

	void main() {

		int n;
		printf("Enter number:");
		scanf("%d",&n);

		printf("Number of steps: %d\n",countSteps(n));
	}
