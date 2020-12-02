#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<math.h>


using namespace std;

int main()
{
	
   int num1;
	float num2,num3,moda;
	float num4=0,num5=0,num6=0,num7=0,aux=0,sesgo;
	
    cout<<"de que tamaño deseas que sea tu arreglo"<<endl;
    cin>>num1;
	
   float vec[num1];
   
   for (int i=0;i<num1;i++)
   {
   	cout<<"ingresa el valor  "<<i<<"  de tu arreglo:"<<endl;
   	cin>>vec[i];
    num5+=vec[i];  
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

	
	for(int i=0;i<num1;i++)
	{
		num6+=pow(vec[i]-(num5/num1),2);	
	}		
	
	sesgo=((num5/num1)-moda)/sqrt(num6 /( num1-1 ));
	
	cout<<"\n el sesgo tiene un valor de --> "<<sesgo<<endl;


	return 0;
}
