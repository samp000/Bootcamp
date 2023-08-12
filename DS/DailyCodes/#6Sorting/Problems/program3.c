
	//sort array by no of factory of number
	//number with less factors is first
	

	#include<stdio.h>

	int getFactors(int n) {

		int cnt=0;

		for(int i=1;i<=n;i++) {
		
			if(n%i==0)
				cnt++;
		}

		printf("\n%d:%d",n,cnt);

		return cnt;
	}

	void swap(int *a,int *b)  {
	
		int tmp = *a;
		*a = *b;
		*b = tmp;
	}

	void sortArr(int *arr,int size) {

		for(int i=0;i<size;i++) {
		
			for(int j=0;j<size-1-i;j++) {
			
				if(getFactors(arr[j]) > getFactors(arr[j+1]) ) {
				
					swap(&arr[j],&arr[j+1]);

				}else {
				
					if(getFactors(arr[j]) == getFactors(arr[j+1]) ) {
						if(arr[j] > arr[j+1])
							swap(&arr[j],&arr[j+1]);
					}
				}
			}
		}
	}

	void main() {
	
		int n;

		printf("Enter the size of array:");
		scanf("%d",&n);

		int arr[n];
		printf("Enter array elements:\n");
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);


		printf("Array before sort:");
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);

		sortArr(arr,n);

		printf("\nArray after sort:");
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);
	
		printf("\n");
	}

