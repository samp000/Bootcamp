
	#include<stdio.h>

	int rev(int num) {

		int n=0;
	
		while(num!=0) {
		
			n = num%10 + n*10;
			num = num/10;
		}

		return n;
	}

	void main() {
	
		int num;
		printf("Enter number:");
		scanf("%d",&num);

		printf("Number after reverse:%d\n",rev(num));
	}
