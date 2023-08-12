
	#include<stdio.h>

	void main() {
	
		int num;
		char ch;
		float rs;
		double crMoney;

		printf("Enter num:");
		scanf("%d",&num);
		
		printf("Entyer ch:");
		scanf(" %c",&ch);
		
		printf("Enter rs:");
		scanf("%f",&rs);

		printf("Enter crMoney:");
		scanf("%lf",&crMoney);

		printf("--------------------------\n");
		
		printf("num:%d\n",num);
		printf("Integer size:%ld\n",sizeof(int));
		printf("ch:%c\n",ch);
		printf("Chgaracter size:%ld\n",sizeof(char));
		printf("rs:%.2f\n",rs);
		printf("float size:%ld\n",sizeof(float));
		printf("crMoney:%.6lf\n",crMoney);
		printf("Double size:%ld\n",sizeof(double));
		
		printf("--------------------------\n");
	}
