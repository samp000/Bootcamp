/*
 * 	WAP to find weather the given i/p is an alphabet a digit or a special character
 *
 * 	i/p: *
 * 	o/p: * is aspecial character
 *
 */

	#include<stdio.h>

	void main() {
	
		char ch;

		printf("Enter character:");
		scanf("%c",&ch);

		if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
			printf("%c is an alphabet\n",ch);
		else if(ch>=47 && ch<=57)
			printf("%c is a digit\n",ch);
		else
			printf("%c is a special character \n",ch);

	}
