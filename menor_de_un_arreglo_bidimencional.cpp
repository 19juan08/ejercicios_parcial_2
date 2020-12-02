#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int main()
{
	int f,c,menor=999;
	
	cout<<"digita el numero de columnas de tu matriz"<<endl;
	cin>>c;
	
	cout<<"digita el numero de filas de tu matriz"<<endl;
	cin>>f;
	
	int mat[f][c];
	
	for(int i=0; i<f; i++)
{
	for(int j=0; j<c; j++)
	{
		mat[i][j]=rand()%100;
		
		if(mat[i][j]<menor)
		{
			menor=mat[i][j];
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

cout<<"el numero menor de tu matriz es -->  "<<menor<<endl;

	return 0;
}
