#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int main()
{
	
   int num1;
	float num2,num3,moda;
	
    cout<<"de que tamaño deseas que sea tu arreglo"<<endl;
    cin>>num1;
	
   float vec[num1];
   
   for (int i=0;i<num1;i++)
   {
   	cout<<"ingresa el valor  "<<i<<"  de tu arreglo:"<<endl;
   	cin>>vec[i];
  
   }
   
   num2=-1;
   for(int i=0;i<num1;i++)
   {
   	num3=0;
   	for(int j=0;j<num1;j++)
   	{
   		if(vec[i]==vec[j])
   		{
   			num3+=1;
		}
    }
    if(num3>num2)
    {
    	moda=vec[i];
    	num2=num3;
	}
   }
   cout<<"\n la moda es de --> "<<moda<<endl;


	return 0;
}
