//1204

#include <stdio.h>

int main () {
	int num, digit;
	
	scanf("%d", &num);
	
	digit = num % 10;
	printf("%d", num);
	
	if (digit==1 && num!=11) {
		printf("st");
	} 
	else if (digit==2 && num!=12) {
		printf("nd");
	} 
	else if (digit==3 && num!=13) {
		printf("rd");
	} 
	else {
		printf("th");
	}
	
	return 0;
}
