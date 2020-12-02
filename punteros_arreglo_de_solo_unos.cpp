#include <iostream>
#include <conio.h>
using namespace std;



int main(){
	
	int vec[100],*punt;
	punt=vec;
	
	for(int i=0;i<100;i++)
	{
		vec[i]=1;
	}
	
	for(int i=0;i<100;i++)
	{
		cout<<" ["<<i<<"]"<<"----->"<<*punt<<endl;
		punt++;
	}
	
	
	
	getch();
	return 0;
}
