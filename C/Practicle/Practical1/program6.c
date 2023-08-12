/*
 *	Program 7: WAP to check weather given input is a pythagorean triplate or not
 */

	#include<stdio.h>

	void main() {

		int a,b,c;

		printf("Enter value of a ,b and c :");
		scanf("%d %d %d",&a,&b,&c);

		int hypo;

		if(a>b && a>c ) {
			hypo = a;
			a = b;
			b = c;
		}
		else if(b>c) {
		
			hypo = b;
			b = c;
		}else {
		
			hypo = c;
		}

		if(a*a + b*b ==  hypo*hypo) {
		
			printf("following is pythagorean triplate...\n");
		
		}else {
		
			printf("following is not a pythagorean triplate...\n");
		}
				
	}
