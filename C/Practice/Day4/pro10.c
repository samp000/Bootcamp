/*	
 *	 4  3  2  1
 *	 C  B  A
 *	 2  1
 *	 A
 */

	#include<stdio.h>

	void main() {
		
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);


		for(int i=1;i<=rows;i++) {

			char ch = 'A'+rows-i;
			int num = rows;
			
			for(int j=rows;j>=i;j--) {

					if(i%2==0)
						printf("%c  ",ch);
					else
						printf("%d  ",num);
				ch--;
				num--;

			}

			printf("\n");
		}
	}
