//1161

#include<stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	if(a%2==0) {
		if(b%2==0) {
			printf("¦��+¦��=¦��");
		}
		else {
			printf("¦��+Ȧ��=Ȧ��");
		}
	}
	else {
		if(b%2!=0) {
			printf("Ȧ��+Ȧ��=¦��");
		}
		else {
			printf("Ȧ��+¦��=Ȧ��");
		}
	}  
	return 0;
}
