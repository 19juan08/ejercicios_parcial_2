#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;



int main(){
	
	int *punt;
	punt= new int[100];	
	
	for(int i=0;i<=100;i++)
	{
		punt[i]=i;
	}
	
	for(int i=0;i<=100;i++)
	{
		if(*punt%2==0)
		{
		   cout<<"el numero "<<*punt<<" es par"<<endl;
	    }
	    punt++;
	}
	
	delete[] punt;
	
	
	
	getch();
	return 0;
}
