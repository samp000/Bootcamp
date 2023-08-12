/*
 *                        1
 *                  4     9
 *           64   125   216
 *   2401  4096  6561 10000
 */

	#include<stdio.h>
	#include<math.h>

	int mypow(int num,int pow) {
	
		int res=1;

		while(pow!=0) {
		
			res = res*num;
			pow--;
		}

		return res;
	}

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);

		int num=1;

		for(int i=1;i<=rows;i++) {


			for(int space=rows-1;space>=i;space--)
				printf("      ");

			for(int j=1;j<=i;j++) {
			
				int x = mypow(num,i);
				
				printf("%6d",x);
				num++;
			}

			printf("\n");
		}
	}
 
