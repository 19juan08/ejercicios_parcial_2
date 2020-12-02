#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void var1();
void var2(int **,int,int);
int **mat,f,c;

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

	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i==j){
				*(*(mat+i)+j)=1;
			}
			else{
				*(*(mat+i)+j)=0;
			}
		}
		cout<<"\n";
	}
}

void var2(int **mat,int f,int c){
	
	if(f==c)
	{
	cout<<"mostrando la matriz identidad"<<endl;
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<*(*(mat+i)+j)<<"  ";
		}
		cout<<"\n";
    }
   }
   else
    {
	cout<<"las matriz no es simetricas por lo tanto no se podra hacer la matriz identidad"<<endl;
    }
	
}
