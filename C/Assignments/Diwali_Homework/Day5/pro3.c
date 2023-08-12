
	#include<stdio.h>

	void revNum(int num) {
	
		int n=0;

		while(num!=0) {
		
			n = num%10 + n*10;

			num=num/10;
		}

		printf("Reversed number is:%d\n",n);
	}

	void isEvenOrOdd(int num) {
	
		if(num%2==0)
			printf("%d is even number\n",num);
		else
			printf("%d is odd number\n",num);

	}

	void isPrime(int num) {
	
		int cnt=0,flg=1;

		if(num==1 || num==0)
			flg=0;

		for(int i=2;i<=num;i++) {
		
			if(num%i==0)
				cnt++;
		}

		if(cnt>2)
			flg=0;

		if(flg)
			printf("%d is a prime number\n",num);
		else
			printf("%d is not a prime number\n",num);
	}

	

	void main() {
	
		void (*arr[])(int) = {&revNum,&isEvenOrOdd,&isPrime};

		int num;
		printf("Enter number:");
		scanf("%d",&num);


		for(int i=0;i<3;i++)
			arr[i](num);
	}
