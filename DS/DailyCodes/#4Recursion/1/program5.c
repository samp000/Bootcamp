
	#include<stdio.h>

	int sum=0;

	void add(int n) {
	
		sum = sum+n;

		if(n != 1)
			add(--n);
		else
			printf("%d\n",sum);
	}

	void main() {
	
		add(10);
	}
