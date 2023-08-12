
	#include<stdio.h>
	
	int isPrime(int num) {
	
		int cnt=0;

		int flg=1;

		if(num==0 || num==1)
			return 0;

		for(int i=1;i<=num;i++) {
		
			if(num%i==0)
				cnt++;
		}

		if(cnt>2)
			flg=0;
		
		return flg;
	}

	void main() {
	
		int num;
		printf("Enter number:");
		scanf("%d",&num);

		if(isPrime(num))
			printf("%d is a prime number\n",num);
		else
			printf("%d is not a prime number\n",num);
	}
