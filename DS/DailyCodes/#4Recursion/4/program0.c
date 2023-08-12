
	//to find number of zeros in number

	#include<stdio.h>

	int countZero(int n) {

		if(n == 0)
			return 0;
		if(n%10 == 0)
			return 1 + countZero(n/10);

		return countZero(n/10);
	}

	void main() {

		int n;
		printf("Enter number:");
		scanf("%d",&n);

		printf("Number of zeros: %d\n",countZero(n));
	}
