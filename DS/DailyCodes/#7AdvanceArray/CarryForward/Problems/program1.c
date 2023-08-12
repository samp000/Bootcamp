	
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	//in this function forst we have created forward aarray and then finded AG pairs

	int findSubSequence(char string[]) {

		char tmp[30];
		tmp[0] = string[0];

		int i=1;



		while(string[i] != '\0') {	
		
			if(string[i] == 'A' || string[i] == 'G')
				tmp[i] = string[i];
			else if(tmp[i-1] == 'A' || tmp[i-1] == 'G' )
				tmp[i] = tmp[i-1];
		
			i++;
		}

		//printf("%s\n",tmp);

		int cnt=0,flg=0,n = strlen(string);
		i=0;

		while(tmp[i] != '\0') {
		
			if(tmp[i] == 'A') 
				flg=0;

			if(tmp[i] == 'G' && flg == 0) {
			
				flg=1;
				cnt++;
			}

			i++;
		}

		//checking is there any "AG" on ends of string 

			if(tmp[0] == 'A' && tmp[n-1] == 'G')
				cnt++;
			if(tmp[n-1] == 'A' && tmp[0] == 'G')
				cnt++;


		return cnt;
	}

	
	void main() {

		char string[30];

		printf("Enter string:");
		scanf("%s",string);		
		int cnt = findSubSequence(string);

		printf("%d\n",cnt);

		printf("\n");
	}

