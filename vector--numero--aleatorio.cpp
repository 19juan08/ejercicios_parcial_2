#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int main()
{

   int num1,num2,num3;
   int vec[num3];
   srand(time(NULL));
   
   cout<<"de que tamaño desea que sea el arreglo de pociciones aleatorias"<<endl;
   cin>>num3;
   
   for (int i=0;i<num3;i++)
   {
   	num2=i;
   	num1=1 + rand()%((num3+1)-1);
   	
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

	return 0;
}
