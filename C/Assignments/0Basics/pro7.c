
	#include<stdio.h>
	
	void main() {
	
		char ch;
		
		 printf("Enter character:");
		 scanf("%c",&ch);

		 if(ch >=65 && ch <=90) {
		 
			 printf("You entered UPPERCASE character \n");
		 }else if(ch>=97 && ch<=122) {
		 
			 printf("You entered lowercase character\n");
		 }else if(ch>=48 && ch<=57) {
		
			 printf("You entered digit\n");
		
		 }else {

			 printf("You entered special character\n");
		 }
	}
