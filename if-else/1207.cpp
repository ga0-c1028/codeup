//1207

#include<stdio.h>

int main () {
	int a, b, c, d, result;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	result = (a+b+c+d) % 5;
	
	switch (result) {
		case 0 :
			printf("¸ð");
			break;
		case 1 :
			printf("µµ");
		 	break;
		case 2 :
			printf("°³");
			break;
		case 3 :
			printf("°É");
			break;
		case 4 :
			printf("À·");
			break; 
	}
	
	return 0;
}
