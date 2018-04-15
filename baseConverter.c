#include <stdio.h>
#include <stdlib.h>

/*#include "func.h"*/

char int_to_base(int integer, int base)
{
	if(integer==0)
	{
		return '0';
	}

	printf("%c", int_to_base(integer/base, base));

	if(integer%base <= 9)
	{
		return '0'+integer%base;
	}
	else
	{
		return '0'+7+(integer%base);
	}
}

int main() {
	int num, base;
	
	printf("Introduza um numero em base 10 e a base de conversão [N B]:\n\t[Prima q para terminar]\n");
	
	do
	{
		printf("[INPUT]: ");
		if(scanf("%d %d", &num, &base)!= 2 || base < 2)
		{
			return 1;
		}
		printf("[OUTPUT]:");
		printf("%c\n", int_to_base(num, base));	
	}while(!scanf("q"));
	
	return 0;
}