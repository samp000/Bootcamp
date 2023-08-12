
	/*
	 *	Program 10: WAP take two characters if these characters are equal then print them as it is but if they are unequal then print their difference	
	 */

	#include<stdio.h>

	void main() {
	
		char ch1,ch2;

		printf("Enter character 1:");
		scanf("%c",&ch1);
		
		printf("Enter character 2:");
		scanf(" %c",&ch2);

		if(ch1 == ch2)
			printf("ch1:%c\tch2:%c\n",ch1,ch2);
		else {
		
			if(ch1>ch2)
				printf("The difference between %c and %c is :%d\n",ch1,ch2,ch1-ch2);
			else
				printf("The difference between %c and %c is :%d\n",ch1,ch2,ch2-ch1);
				
		}
	}
