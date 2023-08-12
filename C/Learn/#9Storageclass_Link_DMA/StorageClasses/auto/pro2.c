
	#include<stdio.h>

	/*
	 * 	variables declared here are globel and bu writing "auto" we are making them as local so we are reducing scope of actual global
	 * 	variable this gives "error"
	 *	
	 *	error : file-scope declaration of ‘x’ specifies ‘auto’
		
	 	file-scope means that variable is globel
	 */

	auto int x=10;		

	void main() {

		printf("%d\n",x);
	}
