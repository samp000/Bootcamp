/*	Program 10:
 *
 *	D1  C2  B3  A4
 *	e5  f4  g3  h2
 *	F3  E4  D5  C6
 *	g7  h6  i5  j4
 */
	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter no of rows:");
		scanf("%d",&rows);

		int num = 1;

		for(int i=1;i<=rows;i++) {

			char ch = 'A'+rows+i-2;
			
			for(int j=1;j<=rows;j++) {
	
				if(i%2==0) {
					printf("%c%-3d",ch+32,num);	
					num--;
					ch++;
				}
				else {
					printf("%c%-3d",ch,num);	
					num++;
					ch--;
				}
			}
			if(i%2==0)
				num+=2;


			printf("\n");
		}
	}
