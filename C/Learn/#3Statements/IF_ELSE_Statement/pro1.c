	
	#include<stdio.h>

	void main() {
	
		char isON;
		printf("is your headlight button is on ?(y/n):");
		scanf("%c",&isON);

		if(isON == 'y' || isON == 'Y')
			printf("Your headlight is on\n");
		else
			printf("Your headlight is off\n");
	}
