
	#include<stdio.h>

	int fun(int n) {
	
		printf("%d\n",n);

		if(n <= 1)
			return 1;

		return fun(n-1) + fun(n-2);
	}

	void main(){
	
		printf("%d\n",fun(3));

	}
