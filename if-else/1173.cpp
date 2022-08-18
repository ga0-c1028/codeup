//1173

#include<stdio.h>

int main() {
	int hour, min;
	scanf("%d %d", &hour, &min);
	
	if (min>=30) {
		printf("%d %d", hour, min-30);
	}
	else {
		if(hour==0){
			printf("23 %d", 60-(30-min));
		} else{
			printf("%d %d", hour-1, 60-(30-min));	
		}
	}
	
	return 0;
}
