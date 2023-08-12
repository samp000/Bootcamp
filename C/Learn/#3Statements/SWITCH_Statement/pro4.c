
	int printf(const char *,... );
	#define AREA(a) (3.14*a*a)

	void main() {
	
		int x=2,y=3;

		int input;
		printf("Enter value:");
		scanf("%d",&input);

		float ans = AREA(10.0);
		printf("area:%f\n",ans);

		switch(input) {
		
			case 5:
				printf("5\n");
				break;
			case 2:
				printf("x+y\n");
				break;
			case 3:
				printf("y+x\n");
				break;

		}
	}
