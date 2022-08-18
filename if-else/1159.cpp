//1159

#include<stdio.h>

int main() {
	int l;
	scanf("%d", &l);
	
	if((l>=50 && l<=70) || (l%6==0)) {
		printf("win");
	}else {
		printf("lose");
	}
	
	return 0;
}
