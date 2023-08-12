
	#include<stdio.h>

	void main() {

		int sum=0;
		
		for(int i=1;i<=19;i++) {
		
				if(i%2!=0)  {
					sum = sum+i;
					printf("%d ",i);
				}
		}

		printf("\nSum of first 10 odd numbers is:%d\n",sum);
	}
