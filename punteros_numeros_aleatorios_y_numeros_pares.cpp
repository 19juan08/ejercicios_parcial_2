#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int main()
{
	
   int num1,num2,num3,num4;
   srand(time(NULL));
     
   cout<<"dame el tamano de tu arreglo "<<endl;
   cin>>num4;
   
   int vec[num4],*punt1;
   
   for (int i=0;i<num4;i++)
   {
   	num2=i;
   	num1=1 + rand()%((num4+1)-1);

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
		
		}
	}
	
   }
   
   cout<<"\n\ntu arreglo es: "<<endl;
   
   punt1=vec;
   for (int i=0;i<num4;i++)
   {
   	  cout<<*punt1<<endl;
      punt1++;	
   }
   
   punt1=vec;
   
    cout<<"\n\nlos numeros pares de tu arreglo son : "<<endl;
   
   for (int i=0;i<num4;i++)
   {
   	  if(*punt1%2==0)
   	    {
   	    	cout<<*punt1<<endl;
		}
		punt1++;	
   }
   
  
   

   
   


	return 0;
}
