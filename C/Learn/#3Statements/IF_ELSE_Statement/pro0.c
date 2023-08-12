
	#include<stdio.h>

	void main() {
	
		int x;
		printf("Enter value:");
		scanf("%d",&x);

		if(x%2==0)
			printf("%d is divisible by 2\n",x);
		else
			printf("%d is not divisible by 2\n",x);
	}
