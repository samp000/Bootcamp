
	#include<stdio.h>
	#include<stdlib.h>

	FILE *fp = NULL;
	
	void options() {
		printf("-----------------------------------------\n");	
		printf("1.Read\n");
		printf("2.Write\n");
		printf("3.Exit\n");
		printf("-----------------------------------------\n");	
	}
	
	void readFile() {
	
		char fname[50],ch;
		
		printf("Enter file name to read:");
		scanf("%s",fname);

		fp = fopen(fname,"r");

		if(fp == NULL){
		
			printf("ERROR\n");
			exit(-1);
		}

		printf("\n========================================================File contents are========================================\n");

		while((ch=fgetc(fp)) != EOF) {
		
			printf("%c",ch);
		}

		printf("===================================================================================================================\n");
	
		fclose(fp);
	}

	void write() {
	
		char fname[50],buff[200];
		printf("Enter file name to read:");
		scanf("%s",fname);

		fp = fopen(fname,"a");

		if(fp == NULL) {
		
			printf("ERROR\n");
			exit(-1);
		}

		getchar();

		printf("===================================================Enter content:===================================================\n");
		fgets(buff,200,stdin);
		printf("===================================================================================================================\n");
	
		fputs(buff,fp);

		printf("Writing completed....\n");
		fclose(fp);
	}

	void main() {
	
		int choice;

		while(1) {

			options();

			printf("Enter your choice:");
			scanf("%d",&choice);
		
			switch(choice) {
			
				case 1:
					readFile();
					break;
				case 2:
					write();
					break;
				case 3:
					exit(0);
					break;
			}
		}

	}
	
