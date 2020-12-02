#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;



int main()
{
	int f,c;
	
	cout<<"digita el numero de columnas de tu matriz"<<endl;
	cin>>c;
	
	cout<<"digita el numero de filas de tu matriz"<<endl;
	cin>>f;
	
	int mat[f][c];
	
	if(f==c)
	{
	for(int i=0; i<f; i++)
{
	for(int j=0; j<c; j++)
	{
		if(i==j)
		{
			mat[i][j]=1;
		}
		else
		{
			mat[i][j]=0;
		}
	}	
	cout<<endl;
}

for(int i=0; i<f; i++)
{
	for(int j=0; j<c; j++)
	{
		cout<<mat[i][j]<<"  ";
	}	
	cout<<endl;
}

}
else
{
	cout<<"no podemos realizar la matriz identidad "<<endl;
}


	
	
   
	return 0;
}
