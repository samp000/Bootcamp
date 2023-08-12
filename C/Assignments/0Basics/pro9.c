
	#include<stdio.h>
	
	void main() {
	
		char ch;
		
		 printf("Enter character:");
		 scanf("%c",&ch);

		 if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u') {
		 
			 printf("%c is Vowel\n",ch);
		 }else {
		 
			 printf("%c is consonent\n",ch);
		 }
	}
