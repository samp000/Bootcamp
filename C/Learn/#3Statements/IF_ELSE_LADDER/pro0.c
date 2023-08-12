
	#include<stdio.h>

	void main() {
	
		int pMoney;
		printf("Enter pocket money:");
		scanf("%d",&pMoney);

		if(pMoney >= 2500)
			printf("Happipola\n");
		else if(pMoney >= 2000)
			printf("CO2\n");
		else if(pMoney >= 1000)
			printf("Sarovar\n");
		else if(pMoney >= 500)
			printf("Vaishali\n");
		else
			printf("Stay home\n");

	}
