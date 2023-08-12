/*
 *
 * 	Program 6: take input from user and count no of digits
 */


	#include<stdio.h>

	void main() {
	
		int num;

		printf("Enter number:");
		scanf("%d",&num);

		int cnt=0,tmp=num;

		while(tmp!=0) {
		
			cnt++;
			tmp = tmp/10;
		}

		printf("Number of digits in %d is %d\n",num,cnt);
	}
