/*	Program 6:
 *
 * 	=  =  =  =  =  =
 * 	$  $  $  $  $  $
 * 	@  @  @  @  @  @
 * 	=  =  =  =  =  =
 * 	$  $  $  $  $  $
 * 	@  @  @  @  @  @
 *
 */
	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter no of rows:");
		scanf("%d",&rows);

		int flg=1;


		for(int i=1;i<=rows;i++) {

			for(int j=1;j<=rows;j++) {

				if(flg%3==1)
					printf("=  ");
				else if(flg%3==2)
					printf("$  ");	
				else if(flg%3==0)
					printf("@  ");	

			}

			flg++;

			printf("\n");
		}
	}
