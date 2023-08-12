
	#include<stdio.h>

	void main(){
	
		int arr[2][3][3] = {{1,2,3,4,5,6,7,8,9},{10,11,12,13,14,15,16,17,18}};

		printf("%d\n",&arr);
		printf("%d\n",arr);
		printf("%d\n",arr[0]);
		printf("%d\n",&arr[0]);
		printf("%d\n",&arr[0][0]);
	
		/*

		printf("%d\n",*(&arr));		//address of first mat
		printf("%d\n",*arr);		//address of 1st row of 1st mat
		printf("%d\n",*arr[0]);		//address of first row of 1st mat
		printf("%d\n",*(&arr[0]));	//address of first row of 1st mat
		printf("%d\n",*(&arr[0][0]));	//address of 1st ele in 1st row of 1st mat

		*/	
		
		printf("%d\n",****(&arr));
		printf("%d\n",***arr);
		printf("%d\n",**arr[0]);
		printf("%d\n",***(&arr[0]));
		printf("%d\n",**(&arr[0][0]));

		printf("%d\n",arr[1][2][1]);		//17
		printf("%d\n",*(*(*(arr+1)+2)+1));	//17


	}
