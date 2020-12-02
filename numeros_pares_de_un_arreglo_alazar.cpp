#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int main()
{     
   int num,num1,num2,mayor=0;
   	
   cout<<"digita el tamano de tu arreglo"<<endl;
   cin>>num;
   	
   cout<<"\n\nlos numeros pares de tu arreglo son "<<endl; 
     
   int vec[num];
   srand(time(NULL));
   	
   for (int i=0;i<num;i++)
   {
   	num2=i;
   	num1=1 + rand()%((num+1)-1);

   	for(int j=0;j<=num2;j++)
   	{
   		if(num1==vec[j])
   		{
   			num2=num2-num2;
   			i=i-1;
		}
		while((num2==i)&&(num1!=vec[j])&&(j==i))
		{
			vec[i]=num1;
			cout<<vec[i]<<endl;
		}	
	}
   }

   cout<<"\nlos numeros pares de tu arreglo son "<<endl;

   for (int i=0;i<num;i++)
   {
		if(vec[i]%2==0)
			{
				cout<<vec[i]<<endl;
			}
	}
   
	return 0;
}
