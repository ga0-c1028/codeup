//1169

#include<stdio.h>

int main() {
	int age;
	
	scanf("%d", &age);
	
	if (age<=13){
		printf("%d 3", 13-age);
	} 
	else {
		printf("%d 1", 100+(13-age));
	}
	return 0;
}
