/*
 *	Assigning an array to an array
 *
 * */

	#include<stdio.h>

	void main() {
	
		int arr1[3] = {10,20,30};
		int arr2[3] = {10,20,30};

		if(arr1 == arr2)				//this line compares base address of both arrays
			printf("arrays are equal\n");
		else
			printf("arrays not are equal\n");

	}
