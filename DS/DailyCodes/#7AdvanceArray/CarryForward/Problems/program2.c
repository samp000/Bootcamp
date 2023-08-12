
	#include<stdio.h>
	#include<stdlib.h>
	

	int *leadersInArray(int *arr,int size,int *resSize) {
	
		int backArray[size];
		int cnt=1;		//cnt to store no of leaders

		//creating bacward array

		backArray[size-1] = arr[size-1];

		for(int i=size-2;i>=0;i--) {
		
			if(arr[i] > backArray[i+1])  {
				backArray[i] = arr[i];
				cnt++;
			}else
				backArray[i] = backArray[i+1];
		}

		int *res = (int*)calloc(cnt,sizeof(int));

		res[0] = backArray[0];
		
		for(int i=1,j=1;i<size;i++) {
		
			if(backArray[i] != backArray[i-1])
				res[j++] = backArray[i];

		}
		
		*resSize = cnt;		//returning size in out parameter
		
		return res;			//returning resultant array
	}

	void main() {
	
		int n;
		printf("Enter size of array:");
		scanf("%d",&n);

		int arr[n];

		printf("Enter array elements:");
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);
	
		int resSize=0;
		int * res = leadersInArray(arr,n,&resSize);

		printf("Leaders in array are:");

		for(int i=0;i<resSize;i++) {
		
			printf("%d ",res[i]);
		}

		printf("\n");
	}

