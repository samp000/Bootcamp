
	#include<stdio.h>
	
	void main() {
	
	
		int x,rem;

		printf("Enter a number:");
		scanf("%d",&x);

		while(x!=0) {
		
			rem = x%10;
			printf("%d ",rem*5);
			x = x/10;
		}

		printf("\n");
	}
