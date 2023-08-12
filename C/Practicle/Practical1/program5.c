
/*
 * 	Program 6:	WAP to get 10 nubers from user and fint thei avg and sum
 */

	#include<stdio.h>
	
	void main() {
	
		int num,sum=0;
		float avg;

		for(int i=1;i<=10;i++) {
		
			printf("Enter number %d:",i);
			scanf("%d",&num);

			sum = sum + num;
		}

		avg = (float)sum / 10;

		printf("Sum:%d\nAverage:%.2f\n",sum,avg);
	}
