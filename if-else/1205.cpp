//1205

#include <stdio.h>

int main () {
	int i;
	float a, b;
	double sum, diff, mul, div, max;
	double squ1=1, squ2=1;
	
	scanf("%f %f", &a, &b);
	
	sum = a+b;
	diff = a>=b ? a-b : b-a;
	mul = a*b;
	div = a>=b ? a/b : b/a;
	for (i=0; i<b; i++) {
		squ1 *= a;
	}
	for (i=0; i<a; i++) {
		squ2 *= b;
	}
	
	if(sum>=diff && sum>=mul && sum>=div && sum>=squ1 && sum>=squ2) {
		printf("%f", sum);
	} else if (diff>=sum && diff>=mul && diff>=div && diff>=squ1 && diff>=squ2) {
		printf("%f", diff);
	} else if (mul>=sum && mul>=diff && mul>=div && mul>=squ1 && mul>=squ2) {
		printf("%f", mul);
	} else if (div>=sum && div>=mul && div>=diff && div>=squ1 && div>=squ2) {
		printf("%f", div);
	} else if (squ1>=sum && squ1>=diff && squ1>=div && squ1>=mul && squ1>=squ2) {
		printf("%f", squ1);
	} else if (squ2>=sum && squ2>=diff && squ2>=div && squ2>=mul && squ2>=squ1) {
		printf("%f", squ2);
	}  
	
	
	return 0;
}
