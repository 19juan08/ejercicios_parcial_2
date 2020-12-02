#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int main()
{
	
   int num1,num2,num3,num4;
   int vec[50],vec1[50],*punt1,*punt2;
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
		}
	}
	
   }
   
   punt1=vec;
   punt2=vec1;
   
   for (int i=0;i<50;i++)
   {
   	  cout<<*punt1<<" * "<<num4<<" = "<<*punt2<<endl;
      punt1++;	
      punt2++;
   }
   


	return 0;
}
