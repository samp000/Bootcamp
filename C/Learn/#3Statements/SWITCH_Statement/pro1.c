
	#include<stdio.h>

	void main() {
	
		char ch;
		printf("Enter a value of ch:");
		scanf("%c",&ch);

		//ch = '67';

		printf("ch:%c %d\n",ch,ch);

		switch(ch) {
		
			case 'A':
				printf("One\n");
				break;
			case 'B':
				printf("Two\n");
				break;
			case 67:
				printf("Three\n");
				break;
			case '7':
				printf("Seven\n");
				break;
			default:
				printf("Only enter number between 1-5\n");
				break;
		}

	}
