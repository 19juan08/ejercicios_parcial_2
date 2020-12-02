#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int main()
{
	int mat[4][5];
	int x=1,y=0;
	
	cout<<"los primeros 20 numeros de la sucesion de Fibonacci."<<endl;
	 
	for(int i=0; i<4; i++)
   {
	for(int j=0; j<5; j++)
	{
		mat[i][j]= x + y;
		x = y;
		y = mat[i][j];
	}	
	cout<<endl;
    }

    for(int i=0; i<4; i++)
   {
	for(int j=0; j<5; j++)
	{
		cout<<mat[i][j]<<"  ";
	}	
	cout<<endl;
   }
	
	return 0;
}
