/*
 * 	Subtraction of pointers
 *
 */

	#include<stdio.h>

	void main() {
	
		int arr[] = {10,20,30,40,50};
				
		
		int *ptr1 = &arr[0];	
		int *ptr2 = &arr[3];

		printf("%d\n",*ptr1);	
		printf("%d\n",*ptr2);	

		printf("%d\n",ptr2-ptr1);		
		printf("%d\n",ptr1-ptr2);		

/*	
 *	--ptr2 - ptr1 ==>  (ptr2-ptr)/sizeof(ptr1 datatype)
 *	
 *	--let ptr1 have address 100 then ptr2 will have 112
 *		so ptr2-ptr1  ==> (112-100)/sizeof(int) ==> 12/4  ==> 3
 *	
 *	--we divide by a datatype of bigger datatype between pointers
 *
 *	--if ptr1 is int and ptr2 is double we will divide by 8
 */

	}

