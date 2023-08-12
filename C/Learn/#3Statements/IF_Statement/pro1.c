
	#include<stdio.h>

	void main() {
	
		char ch;
		
		printf("Enter the character:");
		scanf("%c",&ch);

		printf("You have entered:%c\n",ch);


		if(ch>=65 && ch<=90)
			printf("You have entered Capital letter\n");
		else if(ch>=97 && ch<=120)
			printf("You have entered Small letter\n");
		else if(ch>=47 && ch<=48)
			printf("You have entered digits\n");
		else 
			printf("You have entered special symbol\n");
				
	}
