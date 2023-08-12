
	#include<stdio.h>
	
	void main() {
	
		char ch1,ch2;

		printf("Lower bound character:");
		scanf("%c",&ch1);
		
		printf("Upper bound character:");
		scanf(" %c",&ch2);

		while(ch1<=ch2) {
		
			printf("%c\n",ch1);
			ch1++;
		}
	}
