//1170

#include<stdio.h>

int main() {
	int year, class, number;
	
	scanf("%d %d %d", &year, &class, &number);
 	
	printf("%d", year);
	
	if (class<10) {
		printf("0%d", class);
		if(number<10) {
 			printf("00%d", number);
		}
		else if(number<100) {
			printf("0%d", number);
		}
		else {
			printf("%d", number);
		}
	}
	else {
		printf("%d", class);
		if(number<10) {
 			printf("00%d", number);
		}
		else if(number<100) {
			printf("0%d", number);
		}
		else {
			printf("%d", number);
		}		
	}
 	
	
	return 0;
}
