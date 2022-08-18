//1165

#include<stdio.h>

int main() {
	int time, score;
	
	scanf("%d %d", &time, &score);
	
	if(time%5==0) {
		printf("%d", ((90-time)/5)+score);	
	}
	else {
		printf("%d", ((90-time)/5)+score+1);
	}
	
	return 0;
}
