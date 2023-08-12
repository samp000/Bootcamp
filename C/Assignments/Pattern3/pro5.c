/*	Program 5:
 *	
 *	1  4  3
 *	16 5  36
 *	7  64 9
 */
	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter no of rows:");
		scanf("%d",&rows);

		int num=1,flg=0;

		for(int i=1;i<=rows;i++) {

			for(int j=1;j<=rows;j++) {

				if(flg==0) {
					printf("%-4d ",num);
					flg=1;
				}
				else {
					printf("%-4d ",num*num);	
					flg=0;
				}

				num++;

			}

			printf("\n");
		}
	}
