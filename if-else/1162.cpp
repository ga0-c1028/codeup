//1162

#include<stdio.h>

int main() {
	int year, month, day;
	int result;
	
	scanf("%d %d %d", &year, &month, &day);
	result = year-month+day;
	if(result%10==0) {
		printf("���");
	}
	else {
		printf("�׷�����");
	}
	
	return 0;
}
