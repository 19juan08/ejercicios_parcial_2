#include<iostream>
#include<ctime>
#include<stdlib.h>
//*Llenar un arreglo con los números impares del 0 a N y mostrar a cuanto equivale la suma de todos los valores.*// 
using namespace std;

int main()
{
	int num1,vec[100],suma=0;
	
	cout<<"digita el limite de tu sumatoria de numeros impares"<<endl;
	cin>>num1;
	
	for(int i =0;i<=num1;i++)
	{
		if(i%2!=0)
		{
			vec[i]=i;
			suma+=vec[i];
			cout<<vec[i]<<endl;
		}
	}
	cout<<"\nla suma de los numeros impares hata el  "<<num1<<"  es de -->   "<<suma;
	
	return 0;
}
