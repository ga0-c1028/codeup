//1120

#include<stdio.h>

int main() {
	int a, b, c;
	float mean;
	
	scanf("%d %d %d", &a, &b, &c);
	
	mean = ((float)a+(float)b+(float)c)/3.0;
	printf("%.2f", mean);
	
	return 0;
}
