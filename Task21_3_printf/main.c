#include <stdio.h>

int main(void)
{
	//Aufgabe 21.3 Vorbereitung
	printf("Hello world!\n");
	
	int i=6;
	printf("i= %d\n",i);
	printf("i= %3d\n",i);
	
	
	char c='h';
	printf("c= %c, i= %d\n",c,i);
	
	printf("\n\n\n#+#+#+#+#+#+#+#+#+#+#\nNeue Aufgabe\n#+#+#+#+#+#+#+#+#+#+#\n\n");
	
	//Aufgabe 21.3
	
	char *buffer= malloc(6 * sizeof(char));
	strcpy(buffer, "Hello");	
	printf("%s\n",buffer);
	buffer[2] = '\0';
	printf("%s\n",buffer);
	
	char *myString = "Hello";
	myString[4]='_';
	printf("%s\n",myString);
	

	

	return 0;
}