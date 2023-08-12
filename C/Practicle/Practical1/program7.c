
/*
 *	program 8 : WAP  taht takes angles of a triangle from user and print weather the angle is valid or not
 * 	
 */

	#include<stdio.h>

	void main() {
	
		int angle1,angle2,angle3;

		printf("Enter angle1:");
		scanf("%d",&angle1);
		
		printf("Enter angle2:");
		scanf("%d",&angle2);
		
		printf("Enter angle3:");
		scanf("%d",&angle3);

		if(angle1+angle2+angle3 == 180)
			printf("The is a valid triangle\n");
		else
			printf("The is not a valid triangle\n");

	}
