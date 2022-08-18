//1210

#include<stdio.h>

int main () {
	int s1, s2, kcal;
	int arr[6] = {400, 340, 170, 100, 70, };
	
	scanf("%d %d", &s1, &s2);
	
	kcal = arr[s1-1] + arr[s2-1];
	if (kcal > 500) {
		printf("angry");
	} else {
		printf("no angry");
	}
	
	return 0;
} 
