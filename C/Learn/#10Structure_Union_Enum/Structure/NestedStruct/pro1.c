
	#include<stdio.h>

	struct Demo {
	
		int x,y;
	}obj1;

	void main() {
	
		/*
		 * 	below line gives error cause we canot initialize object using "{}" after creating it we should use this at same time 
		 *
		 * 	this is anologus to array initialization like:
		 *
		 * 	int arr[5];
		 * 	arr = {10,20,30,40,50}
		 *
		 *
		 * 	conclusion : for doing this we should initialize struct only at the time of object creation 
		 */

		obj1 = {10,20};		
	}
