
	#include<stdio.h>
		
	int sum(int n) {
	
		if(n==1)
			return 1;
	
		return sum(n--) + n;
	}

	void main() {
	
		printf("%d\n",sum(3));
	}
