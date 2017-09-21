#include <stdio.h>

int main(void)
{
	char *strBuffer = malloc(100*sizeof(char));
	strBuffer[0]='\0';
	printf(strBuffer);
	char *name =malloc(100*sizeof(char));
	name="Test";
	sprintf(strBuffer,"Hello, %s!\n", name);
	printf(strBuffer);
	
	return 0;
}