#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void var1();
void var2(int **,int,int);
int **mat,f,c,menor=999;

int main(){
	
	var1();
	var2(mat,f,c);
	
	for(int i=0;i<f;i++)
	{
		delete[] mat[i];
	}
	
	delete[] mat;
	
	getch;
	return 0;
}


void var1(){
	
	cout<<"digita el numero de filas de tu matriz identidad"<<endl;
	cin>>f;
	cout<<"digita el numero de columnas  de tu matriz identidad"<<endl;
	cin>>c;
	
	mat= new int *[f];
	for(int i=0;i<f;i++)
	{
		mat[i] = new int [c];
	}

	cout<<"rellenando la  matriz"<<endl;
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<"dijite el elemento ["<<i<<"] ["<<j<<"] de la matriz"<<endl;
			cin>>*(*(mat+i)+j);
		}
	}
}

void var2(int **mat,int f,int c){
	
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<*(*(mat+i)+j)<<"  ";
			if((*(*(mat+i)+j))< menor )
			{
				menor=(*(*(mat+i)+j));
			}
		}
		cout<<"\n";
    }

	    
    cout<<"el menor numero de tu matriz es -->"<<menor<<endl;
	
}
