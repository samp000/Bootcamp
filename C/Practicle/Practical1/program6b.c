/*
 *	Program 7: WAP to check weather given input is a pythagorean triplate or not
 */

	#include<stdio.h>

	void main() {

		int a,b,c;

		printf("Enter side1 :");
		scanf("%d",&a);
		printf("Enter side2 :");
		scanf("%d",&b);
		printf("Enter hypoteneous:");
		scanf("%d",&c);

		if(a*a + b*b ==  c*c) {
		
			printf("following is pythagorean triplate...\n");
		
		}else {
		
			printf("following is not a pythagorean triplate...\n");
		}
				
	}
