//1180

#include<stdio.h>

int main() {
	int n, storage;
	scanf("%d", &n);
	
	storage = ((n%10)*10 + (n/10)) * 2;
	
	if (storage>=100) {
		storage = storage%100;
	}
	printf("%d\n", storage);
	
	if(storage<=50) {
		printf("GOOD");
	} else {
		printf("OH MY GOD");
	}
	
	return 0;
}
