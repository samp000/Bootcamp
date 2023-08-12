
	#include<stdio.h>

	void TOH(int n,char fromRod,char viaRod,char toRod) {
	
		if(n > 0) {
		
			TOH(n-1,fromRod,toRod,viaRod);
			printf("%c->%c\n",fromRod,toRod);
			TOH(n-1,viaRod,fromRod,toRod);
		}
	}

	void main() {
	
		int n;
		printf("Enter no of disks:");
		scanf("%d",&n);

		TOH(n,'A','B','C');

		printf("-----------------------\n");
	}
