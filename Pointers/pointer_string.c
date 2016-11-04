#include<stdio.h>

char strA [80] = "A String to be used for demonstration purpose";
char strB [80] = "123456789012345678901234567890123456789012345678901234567890";

int main()
{
	char *ptrA,*ptrB;
	puts(strA);
	ptrA=strA;
	puts(ptrA);
	ptrB=strB;
	putchar('\n');
	while(*ptrA != '\0')
	{
		*ptrB++ = *ptrA++;
	}
	*ptrB = '\0';
	puts(strB);
	char *pB;
	pB=strB;
	puts(pB);
	printf("%c \n",*(pB++));
	printf("%c \n",*(pB)++);
	return 0;
}
