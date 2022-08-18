//1163

#include<stdio.h>

int main() {
	int year, month, day;
	int result;
	
	scanf("%d %d %d", &year, &month, &day);
	result = (year+month+day)/100;

	if(result%2==0) {
		printf("대박");
	}
	else {
		printf("그럭저럭");
	}
	
	return 0;
}
