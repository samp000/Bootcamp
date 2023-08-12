/*
 *	A0 B1 C2 D3 E4 F5 G6
 *	   G2 I3 J4 K5 L6
 *	      M4 N5 O6
 *	         P6
 */	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);

		for(int i=1;i<=rows;i++) {
		
			for(int sp=1;sp<i;sp++)
				printf("   ");

			char ch='A';
			int num = 0;

			for(int j=1;j<=2*(rows-i)+1;j++) {
			
				printf("%c%d ",ch++,num++);
				
			}
			num+=2;

			printf("\n");
		}
	}
