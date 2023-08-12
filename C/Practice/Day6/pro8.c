/*
 *	100   9   64   7
 *	      36  5    16
 *	          3    4
 *	               1 
 *
 */


	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	 
		int num = 2*rows+2;
		int flg=1;

		for(int i=1;i<=rows;i++) {

			for(int sp=1;sp<=i;sp++) 
				printf("    ");

			for(int j=rows;j>=i;j--) {

				if(flg==1) {
					printf("%-3d ",num*num);
					flg=0;
				}else {
					printf("%-3d ",num);
					flg=1;
				}

				num--;
			}

			printf("\n");
		}
	}
