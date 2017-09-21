#include <stdio.h>

int main(void)
{
	int numbers = 100000;
	int col = 10;
	int curCol = 0;
	
	for (int i = 2; i<=numbers; i++){
		if(!(i%2)){
			printf("%d ",i);
			curCol++;
			if(curCol==col){
				printf("\n");
				curCol=0;
			}
		}
		i++;
	}
	return 0;
}