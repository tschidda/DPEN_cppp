#include <iostream>
#include <cstddef>

void problem1(int* iarr){
	std::cout <<"\n\nAufgabe 6.1: \n";
	for (int i=0;i<10;i++){
		std::cout <<"iarr["<<i<<"] = "<<iarr[i]<<std::endl;
	}
}

void problem2(const int *const array, const size_t size){
	std::cout <<"\n\nAufgabe 6.2: \n";
	for (unsigned int i=0;i<size;i++){
		std::cout <<"array["<<i<<"] = "<<array[i]<<std::endl;
	}
}

void problem3(const int *const array){
	std::cout <<"\n\nAufgabe 6.3: \n";
	for (const int *p=array ; p != array+10 ; ++p){
		std::cout <<"array["<<*p<<"] = "<<array[*p]<<std::endl;
	}
}

void problem4(const int *const begin, const int *const end){
	std::cout <<"\n\nAufgabe 6.4: \n";
	for (const int *p=begin ; p != end ; ++p){
		std::cout <<"array["<<*p<<"] = "<<*p<<std::endl;
	}
}

void problem5(const int *const begin, const int *const end){
	std::cout <<"\n\nAufgabe 6.5: \n";
	for (const int *p=begin ; p != end ; ++p){
		std::cout <<"array["<<*p<<"] = "<<*p<<std::endl;
	}
}

void problem6(){
	int n=0;
	std::cout<<"\n\nAufhabe 6.6:\n";
	std::cout<<"Bitte Anzahl eingeben:";
	std::cin>> n;
	int *pArr = new int[n];
	for (int i = n; i>0; i--){
		std::cout<<"Bitte eine Zahl eingeben:";
		std::cin>>pArr[n-i];
		std::cout<<"\nnoch "<<i<<" Zahlen übrig\n";
	}
	
	for (int i=0; i<n;i++){
		std::cout<<"pArr["<<i<<"] = "<<pArr[i]<<std::endl;
	}
	
	delete[] pArr;
	
	
}
int main(void)
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	const std::size_t size = sizeof(arr)/sizeof(int);
	
	problem1(arr);	
	problem2(arr, size);	
	problem3(arr);	
	problem4(&arr[2], &arr[7]);
	problem5(arr+5, arr+8);
	problem6();
	
	return 0;
}