#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int main()
{
	
   int num1,num2,num3,num4,mayor=0;
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
   
   punt1=vec;
   cout<<"tu arreglo es: "<<endl;
   
   for (int i=0;i<num4;i++)
   {
   	    if(*punt1>mayor)
   	    {
   	    	mayor=*punt1;
		   }
   	  cout<<*punt1<<endl;
      punt1++;	
   }
   
   cout<<"\n\nel numero mayor de tu arreglo es  --> "<<mayor<<endl;
   


	return 0;
}
