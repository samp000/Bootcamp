
/*	Program1 : WAP to take check ehether the input is a leap year or not 
 *
 *
 *
 */

	#include<stdio.h>

	void main() {
	
		int year;

		printf("Enter year:");
		scanf("%d",&year);

		if( (year%400==0) || ((year%4 == 0) && (year%100!=0)))
			printf("%d is a leap year\n",year);
		else	
			printf("%d is not a leap year\n",year);

	}
