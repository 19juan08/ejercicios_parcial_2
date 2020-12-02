#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int main()
{
	
   int num1,num2,num3,num4;
   int vec[50],vec1[50];
   srand(time(NULL));
   
   cout<<"dame un escalar"<<endl;
   cin>>num4;

   
   for (int i=0;i<50;i++)
   {
   	num2=i;
   	num1=1 + rand()%((50+1)-1);

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
			vec1[i]=vec[i]*num4;
			cout<<vec[i]<<" * "<<num4<<" = ";
			cout<<vec1[i]<<endl;
			
		}
	}
	
   }
   
	return 0;
}
