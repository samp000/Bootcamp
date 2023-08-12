
	#include<stdio.h>

	enum Friends {
	
		sandesh,
		ayush,
		suraj,
		avishkar,
		suyog,
		omkar
	};

	void main() {
	
		enum Friends obj;

		printf("%ld\n",sizeof(obj));		//always size is 4 bytes of enum
							
		//accessing enum elements
		printf("%d\n",sandesh);
		printf("%d\n",omkar);
		
		//printf("%d\n",sumit);			sumit is not present in enum so gives error
	
		//enum Friends obj = {kailas,gourav};
	}
