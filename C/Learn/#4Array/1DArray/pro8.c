
	#include<stdio.h>

	void main() {
	
		int arr1[3] = {10,20,30};
		int arr2[3] = {10,20,30};

	
		int flg=0;

		for(int i=0;i<3;i++) {

			if(arr1[i] != arr2[i]) {
				flg=1;
				break;
			}

		}

		if(flg==1)
			printf("arrays are not equal\n");
		else
			printf("arrays are equal\n");
	}
