/*
 * 	Program 7: WAP to calculate LCM of given two numbers 
 *
 */

	#include<stdio.h>

	void main() {
	
		int num1,num2;

		printf("Enter num1:");
		scanf("%d",&num1);
		
		printf("Enter num2:");
		scanf("%d",&num2);

		int max;

		if(num1>num2)
			max = num1;
		else
			max = num2;

		for(;;) {

			if(max%num1==0 && max%num2==0) {
			
				break;
			}else {
			
				max++;
			}

		}

		printf("LCM of %d and %d  is :%d\n",num1,num2,max);
	}
