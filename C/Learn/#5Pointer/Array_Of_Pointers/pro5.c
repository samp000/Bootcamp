
	#include<stdio.h>

	void main() {
	
		int arr1[] = {10,20,30};
		int arr2[] = {40,50,60};
	
		int* iparr[] = {&arr1,&arr2};

		printf("%p\n",iparr[0]);	
		printf("%p\n",iparr[1]);	
		
		printf("%d\n",*(iparr[0]+1));	

		int (*ptr)[3] = &arr1;


		int (*iarr2[])[3] = {&arr1,&arr2};

		printf("%ld\n",sizeof(iarr2));
		
		printf("%d\n",*(*iarr2[0]+1));

	}
