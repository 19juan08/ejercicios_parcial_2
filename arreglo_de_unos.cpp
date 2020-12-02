#include<iostream>
using namespace std;

int main()
{

    int arreglo[100];

    for(int i=0;i<=100;i++)
    {
        arreglo[i]=1;
    }
   
   for(int i=0;i<=100;i++)
   {
       cout<<i<<" --> "<<arreglo[i]<<endl;
   }
	
	return 0;
}
