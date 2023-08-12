/*
 * 	D C B A B C D
 * 	  c b a b c
 * 	    B A B
 * 	      A
 */	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);

		for(int i=1;i<=rows;i++) {
		
			for(int sp=1;sp<i;sp++)
				printf("   ");

			char ch='A'+rows-i;

			for(int j=1;j<=2*(rows-i)+1;j++) {
			
				if(i%2!=0)
					printf("%-3c",ch);
				else
					printf("%-3c",ch+32);

				if(j<rows-i+1)
					ch--;
				else
					ch++;
			}

			printf("\n");
		}
	}
