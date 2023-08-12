
	#include<stdio.h>

	void main() {
	
		int n1,n2;
		printf("Enter size of 1st array:");
		scanf("%d",&n1);
		
		printf("Enter size of 2nd array:");
		scanf("%d",&n2);

		int arr1[n1];
		int arr2[n2];

		printf("Enter elements in 1st array:");
		for(int i=0;i<n1;i++)
			scanf("%d",&arr1[i]);
		
		printf("Enter elements in 2nd array:");
		for(int i=0;i<n2;i++)
			scanf("%d",&arr2[i]);

		int flg=1;

		if(n1 != n2) {
		
			flg=0;

		}else {
		
			for(int i=0;i<n1;i++) {
			
				if(arr1[i] != arr2[i])
					flg=0;
			}
		}

		if(flg)
			printf("Array1 and array2 are equal\n");
		else
			printf("Array1 and array2 are not equal\n");
	

	}
