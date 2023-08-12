
/*
 * 	if entered number is even then print numbers untill 1 from current number 
 * 	if number is odd then print numbers untill 1 with difference of 2
 *
 * 	input  : 6
 * 	output : 6 5 4 3 2 1
 *
 * 	input  : 5
 * 	output : 5 3 1 
 *
 * */

	#include<stdio.h>

	void main() {
	
		int num,tmp;

		printf("Enter number:");
		scanf("%d",&num);

		tmp = num;

		while(num>=1) {
		
			if(tmp%2==0) {
			
				printf("%d ",num);
				num--;
			}else {
			
				printf("%d ",num);
				num = num-2;
			}
		}

		printf("\n");

	}
