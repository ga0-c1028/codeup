//1207

#include<stdio.h>

int main () {
	int a, b, c, d, result;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	result = (a+b+c+d) % 5;
	
	switch (result) {
		case 0 :
			printf("��");
			break;
		case 1 :
			printf("��");
		 	break;
		case 2 :
			printf("��");
			break;
		case 3 :
			printf("��");
			break;
		case 4 :
			printf("��");
			break; 
	}
	
	return 0;
}
