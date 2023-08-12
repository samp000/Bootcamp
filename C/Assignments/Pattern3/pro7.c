/*	Program 7:
 *
 * 	1  4  27
 * 	4  27 16
 * 	27 16 125
 *
 */
	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter no of rows:");
		scanf("%d",&rows);

		int num,flg=0;


		for(int i=1;i<=rows;i++) {

			num=i;

			for(int j=1;j<=rows;j++) {
	
				if(flg==0) {
					printf("%-4d",num*num*num);
					flg=1;	
				}
				else {
					printf("%-4d",num*num);	
					flg=0;	
				}
				num++;
			}


			printf("\n");
		}
	}
