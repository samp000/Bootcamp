
	#include<stdio.h>

	void main() {
	
		float salary;
		printf("Enter your salary:");
		scanf("%f",&salary);

		printf("Your salary is:%.2f\n",salary);

		if(salary>0 && salary<500000)
			printf("You have to pay 0%% tax\n");
		if(salary>=500000 && salary<1000000)
			printf("You have to pay 10%% tax\n");
		if(salary>=1000000 && salary<1500000)
			printf("You have to pay 15%% tax\n");
		if(salary>=1500000 && salary<2000000)
			printf("You have to pay 20%% tax\n");
		if(salary>=2000000)
			printf("You have to pay 30%% tax\n");
		

			
	}
