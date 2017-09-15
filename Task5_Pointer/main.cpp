#include <iostream>
#include <stdio.h>

void outputA1(int i, int *pI){
			std::cout << "Aufgabe 5.2 \n" << std::endl;
	std::cout << *&i << std::endl;
	std::cout << *&pI << std::endl;
	std::cout << &*pI << std::endl;
	std::cout << **&pI << std::endl;
	std::cout << *&*&i << std::endl;
	std::cout << &*&pI << std::endl;
	std::cout << *&*pI << std::endl;
}


void swapPointer (int* a, int* b){
			std::cout << "Aufgabe 5.4 \n" << std::endl;
	printf("vorher:\n %d, %d \n", *a,*b);
	int* tmp = b;
	b=a;
	a=tmp;
	printf("vorher:\n %d, %d \n\n\n", *a,*b);
}


void swapPeference (int &a, int &b){
			std::cout << "Aufgabe 5.4 \n" << std::endl;
	printf("vorher:\n %d, %d \n", a,b);
	int tmp = b;
	b=a;
	a=tmp;
	printf("vorher:\n %d, %d \n\n\n", a,b);
}

void outputA5 (int &i){
		std::cout << "Aufgabe 5.5 \n" << std::endl;
	int j=i;
	int &k = i;
	
	std::cout << "i = "<< i << std::endl;
	std::cout <<  "j = "<< j  << std::endl;
	std::cout <<  "k = "<< k  << std::endl;
	std::cout <<  "&i = "<< &i  << std::endl;
	std::cout <<  "&j = "<< &j  << std::endl;
	std::cout <<  "&k = "<< &k  << std::endl;
}

void outputA6(){
	std::cout << "Aufgabe 5.6 \n\n";
	int i = 1;
	int *iP = &i;
	const int *ciP = &i;
	int const *ciP2 = &i;
	int * const icP = &i;
	const int * const cicP = &i;
	
	int ** iPP=&iP;
	const int * const * cicPP = &iP;
	int ** const iPcP =&iP;
	
	std::cout <<  "i = "<< i  << std::endl;
	std::cout <<  "iP = "<< iP  << std::endl;
	std::cout <<  "ciP = "<< ciP  << std::endl;
	std::cout <<  "ciP2 = "<< ciP2  << std::endl;
	std::cout <<  "icP = "<< icP  << std::endl;
	std::cout <<  "cicP = "<< cicP  << std::endl;
		std::cout <<  "iPP = "<< iPP  << std::endl;
	std::cout <<  " icPP = "<< cicPP  << std::endl;
	std::cout <<  "iPcP = "<< iPcP  << std::endl;
}


int main(void)
{
	int i = 42, j=9;
	int *pI = &i, *pJ=&j;
	
	outputA1(i,	pI);
	swapPointer(pI,pJ);
	swapPointer(&i,&j);
	outputA5(i);
	outputA6();
	
	return 0;
}