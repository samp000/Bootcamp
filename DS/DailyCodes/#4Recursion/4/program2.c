
	//to reverse a number 

	#include<stdio.h>

	int rev(int n) {

		static int sum=0;

		if(n == 0)
			return sum;
		else {

			sum = sum*10 + n%10;
			return rev(n/10);
		}
	}

	void main() {

		int n;
		printf("Enter number:");
		scanf("%d",&n);

		printf("Reversed Number : %d\n",rev(n));
	}
