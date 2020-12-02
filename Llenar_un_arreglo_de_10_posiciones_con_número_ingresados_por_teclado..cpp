#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int main()
{
	
   int num1;
   int vec[10];
   
   
   for (int i=0;i<10;i++)
   {
   	cout<<"ingresa el valor  "<<i+1<<"  de tu arreglo:"<<endl;
   	cin>>vec[i];
   }
	
	cout<<"tu arreglo es"<<endl;
	
	for (int i=0;i<10;i++)
   {
   	cout<<vec[i]<<endl;
   }
   

	return 0;
}
