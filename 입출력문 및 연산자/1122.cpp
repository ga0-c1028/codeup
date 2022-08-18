//1122

#include<stdio.h>
int main() {
	int sec, min;
	
	scanf("%d", &sec);
	min = sec/60;
	printf("%d %d", min, sec%60);
	
	return 0;
}
