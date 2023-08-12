
	#include<stdio.h>

	void retval(int* first,int*last) {
	
		int num;
		printf("Enter a number:");
		scanf("%d",&num);

		*last = num%10;

		while(num>10)
			num/=10;
		*first=num;
	}

	void main() {
	
		int first,last;

		retval(&first,&last);

		printf("First digit:%d\nLast digit:%d\n",first,last);
	}
