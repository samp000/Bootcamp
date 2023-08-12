
	#include<stdio.h>
	#include<stdlib.h>

	struct Lang {
	
		char langName[20];
		char founder[20];
	};

	void input(struct Lang *ptr) {
	
		printf("Enter language name:");
		scanf(" %[^\n]",ptr->langName);
		printf("Enter founder name:");
		scanf(" %[^\n]",ptr->founder);
	}
	
	void disp(struct Lang *ptr) {
	
		printf("---------------------------------------\n");
		printf("%s %s\n",ptr->langName,ptr->founder);
		printf("---------------------------------------\n");
	}

	void main() {
	
		struct Lang *c = (struct Lang*)malloc(sizeof(struct Lang));
		struct Lang *cpp = (struct Lang*)malloc(sizeof(struct Lang));
		struct Lang *java = (struct Lang*)malloc(sizeof(struct Lang));

		input(c);
		input(cpp);
		input(java);

		disp(c);
		disp(cpp);
		disp(java);

	}
