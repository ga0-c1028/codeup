//1203

#include<stdio.h>

int main () {
	int bmi;
	
	scanf("%d", &bmi);
	
	if (bmi<=10) {
		printf("����");
	} else if (bmi<=20) {
		printf("��ü��");
	} else {
		printf("��");
	}
	
	return 0;
}
