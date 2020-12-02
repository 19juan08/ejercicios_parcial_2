#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int main()
{
   int num,num1,num2,mayor=0;
   
   cout<<"dame el tamano del arreglo:"<<endl;
   cin>>num;
   
   int vec[num];
   srand(time(NULL));
   
   	cout<<"tu arreglo es"<<endl;
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
			if(num1>mayor)
			{
				mayor=num1;
			}
		}	
	}

   }
   
   cout<<"\n\nel numero mayor de tu arreglo es --> "<<mayor<<endl;

	return 0;
}
