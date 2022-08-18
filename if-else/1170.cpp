//1170

#include<stdio.h>

int main() {
	int year, class, number;
	
	scanf("%d %d %d", &year, &class, &number);
 	
	printf("%d%d", year, class);
 	if(number<10) {
 		printf("0%d", number);
	}
	else {
		printf("%d", number);
	}
	
	return 0;
}
