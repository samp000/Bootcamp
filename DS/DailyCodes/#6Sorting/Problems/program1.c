

	//sort string of array based on its length
	

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

	void sortByLen(int size,char arr[][10]) {
	
		
		for(int i=0;i<size;i++) {
		
			for(int j=0;j<size-i-1;j++) {
			
				char tmp[10];

				if(mystrlen(arr[j]) > mystrlen(arr[j+1])) {
				
					mystrcpy(tmp,arr[j]);
					mystrcpy(arr[j],arr[j+1]);
					mystrcpy(arr[j+1],tmp);
				}
			}
		}
		
	}
	

	void main() {

		char sarr[][10] = {"Ashish","Kanha","Rahul","Raj","Shashi","Anuj"};

		int size = sizeof(sarr)/sizeof(sarr[0]);

		printf("Array before sort:\n");
		for(int i=0;i<size;i++)
			printf("%s ",*(sarr+i));

		sortByLen(size,sarr);

		printf("\nArray after sort:\n");
		for(int i=0;i<size;i++)
			printf("%s ",sarr[i]);
		
		printf("\n");

	}
