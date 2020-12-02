#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;



int main(){
	
	int num1,suma=0;
	
	cout<<"dime el limite superior de tu arreglo: "<<endl;
	cin>>num1;
	
	int *punt;
	punt= new int[num1];	
	
	for(int i=0;i<=num1;i++)
	{
		punt[i]=i;
	}
	
	for(int i=0;i<=num1;i++)
	{
		if(*punt%2!=0)
		{
		   cout<<"el numero "<<*punt<<" es impar"<<endl;
		   suma+=*punt;
	    }
	    punt++;
	}
	cout<<"la suma de los numeros impares desde el "<<0<<" hasta el nummero "<<num1<<" es de ----->  "<<suma<<endl;
	
	delete[] punt;
	
	
	
	getch();
	return 0;
}
