#include <stdio.h>

int main(void) {
	int da,mon,year;
	scanf("%d-%d-%d",&da,&mon,&year);
	switch(mon)
	{
		case 01:
		printf("january");
		break;
		
		case 02:
		printf("february");
		break;
		
		case 03:
		printf("march");
		break;
		
		case 04:
		printf("april");
		break;
		
		case 05:
		printf("may");
		break;
		
		case 06:
		printf("june");
		break;
		
		case 07:
		printf("july");
		break;
		
		case 8:
		printf("august");
		break;
		
		case 9:
		printf("september");
		break;
		
		case 10:
		printf("october");
		break;
		
		case 11:
		printf("november");
		break;
		
		case 12:
		printf("december");
		break;
		
	}
	
	return 0;
}
