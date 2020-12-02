#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

//*Desarrolle un programa donde almacene la temperatura de las ultimas 24 horas y le permita al usuario conocer la temperatura en la hora que desee//*  

int main()
{
	
   int num1,num2,num3,num4,num5;
   float vec[25];
   srand(time(NULL));
   num5= 1 + rand()%((100+1)-1);
   
   for (int i=1;i<=24;i++)
   {
   	num2=i;
   	num1=1 + rand()%((24+1)-1);

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
   
   cout<<"Que hora(militar) del dia decea saber la temperatura "<<endl;
   cin>>num4;
   
   if(num4>0 && num4<=24)
   {
   for (int i=1;i<=24;i++)
   {
		if(i==num4)
			{
				cout<<"la temperatura fue de "<<vec[i];
			}
		
	}
    cout<<"."<<num5<<"  grados "<<endl;
    }
    else
    {
    	cout<<"no podemos darte la temperatura de esa hora "<<endl;
	}

	return 0;
}
