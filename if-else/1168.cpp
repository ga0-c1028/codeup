//1168

#include<stdio.h>

int main() {
	int birth, s;
	int age;
	scanf("%d %d", &birth, &s);
	
	if (s<3){
		age = (100-birth/10000)+13;
		printf("%d", age);
	} 
	else {
		age = 13-birth/10000;
		printf("%d", age);
	}
	return 0;
}
