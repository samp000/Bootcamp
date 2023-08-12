
	#include<stdio.h>
	
	struct Demo {
	
		int jerNo;
		float avg;
		double grade;
		char arr[10];
	};

	void main() {
	
		printf("%ld\n",sizeof(struct Demo));
	}
