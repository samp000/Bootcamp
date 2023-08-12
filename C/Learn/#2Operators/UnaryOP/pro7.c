
	int printf(const char*,...);

	void main() {
	
		int x = 5;

		int ans =  x+++1+ x++ + ++x ;

		printf("x:%d\n",x);		//8
		printf("ans:%d\n",ans);		//20
	}
