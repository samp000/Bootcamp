/*
 * 	Program 8: WAP take two characters if these characters are eqyal then print the same but if they are unequal then print their difference...
 *
 */

	#include<stdio.h>

	void main() {
	
		char ch1,ch2;

		printf("Enter ch1:");
		scanf("%c",&ch1);
		
		printf("Enter ch2:");
		scanf(" %c",&ch2);

		if(ch1==ch2) {
			printf("%c\n",ch1);
		}else {
		
			printf("difference of two characters is %d \n",ch2-ch1);
		}
	}
