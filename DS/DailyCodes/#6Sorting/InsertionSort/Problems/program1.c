

	//sort string of array alphabetically
	

	#include<stdio.h>
	#include<string.h>

	int mystrlen(char *ch) {
	
		int cnt=0;

		while(*ch != '\0')  {
		
			cnt++;
			ch++;
		}

		return cnt;
	}

	void mystrcpy(char dest[],char src[]) {
	
		while(*src != '\0') {
			*dest = *src;
			src++;
			dest++;
		}

		*dest = '\0';
	}

	void insertionSort(int size,char arr[][10]) {
	
		
		for(int i=0;i<size;i++) {
		
			char val[10];

			mystrcpy(val,arr[i]);
			int j = i-1;
			
			for(; j>=0 && strcmp(arr[j],val)>0 ;j--)
				strcpy(arr[j+1] , arr[j]);

			strcpy(arr[j+1] , val);
		}
		
	}
	

	void main() {

		char sarr[][10] = {"Rahul","Raj","A","BB","Aashish","Datta"};

		int size = sizeof(sarr)/sizeof(sarr[0]);

		printf("Array before sort:\n");
		for(int i=0;i<size;i++)
			printf("%s ",*(sarr+i));

		insertionSort(size,sarr);

		printf("\nArray after sort:\n");
		for(int i=0;i<size;i++)
			printf("%s ",sarr[i]);
		
		printf("\n");

	}
