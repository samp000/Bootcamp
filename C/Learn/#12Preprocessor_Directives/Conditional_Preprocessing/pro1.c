
	#include<stdio.h>

	#define access 1

	void main() {
	

		#if access 
			printf("Access permission\n");
		#else
			printf("No Access permission\n");
		#endif

		printf("EOF\n");
	}
