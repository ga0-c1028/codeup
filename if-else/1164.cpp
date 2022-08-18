//1164

#include<stdio.h>

int main() {
	int t1, t2, t3;
	
	scanf("%d %d %d", &t1, &t2, &t3);
	
	if(t1<=170 || t2<=170 || t3<=170) {
		printf("CRASH");
	}
	else {
		printf("PASS");
	}
	
	return 0;
}
