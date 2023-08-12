
	#include<stdio.h>

	void main() {
	
		int num;

		printf("Enter number:");
		scanf("%d",&num);
		int i=1;

		while(i<=10) {
		
			printf("%d*%d : %d\n",i,num,i*num);
			i++;
		}
	}
