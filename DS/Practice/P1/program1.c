
	//program to find no of elements which have larger number than it

	#include<stdio.h>
	
//naive approch

/*	void isGreater(int *arr,int size) {
	
		int cnt=0;

		for(int i=0;i<size;i++) {
		
			for(int j=0;j<size;j++) {
			
				if(arr[i] < arr[j]) {
				
					cnt++;
					break;
				}
			}
		}

		printf("No of small elements:%d\n",cnt);
	}

*/

//optimised approch


	void isGreater(int *arr,int size) {

		int max=arr[0],cnt=0;

		for(int i=0;i<size;i++){

			if(arr[i] > max)
				max = arr[i];
		}

		for(int i=0;i<size;i++) {
		
			if(arr[i] == max)
				cnt++;
		}

		printf("No of small elements: %d\n",size-cnt);

	}

	void main() {
	
		int n;
		printf("Enter size of array:");
		scanf("%d",&n);

		int arr[n];

		printf("Enter array elements:");
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);

		isGreater(arr,n);

		printf("\n");
	}

	
