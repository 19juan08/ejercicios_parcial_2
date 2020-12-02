#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void var1();
void var6();
void var2(int **,int,int);
void var5(int **,int,int);
void var3(int **,int **,int,int);
void var4(int **,int,int);
int **mat,**mat2,f,c;
int ale;
int main(){
	
	var1();
	var6();
	var2(mat,f,c);
	var5(mat2,f,c);
	var3(mat,mat2,f,c);
	var4(mat,f,c);
	
	for(int i=0;i<f;i++)
	{
		delete[] mat[i];
	}
	
	delete[] mat;
	
	for(int i=0;i<f;i++)
	{
		delete[] mat2[i];
	}
	
	delete[] mat2;
	
	getch;
	return 0;
}


void var1(){
	
	cout<<"digita el numero de filas de tu primera matriz"<<endl;
	cin>>f;
	cout<<"digita el numero de columnas  de tu primera matriz"<<endl;
	cin>>c;
	
	mat= new int *[f];
	for(int i=0;i<f;i++)
	{
		mat[i] = new int [c];
	}
	
	cout<<"rellenando la primera matriz"<<endl;
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
	
	cout<<"mostrando la primera matriz"<<endl;
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<*(*(mat+i)+j)<<"  ";
		}
		cout<<"\n";
    }
}


void var6(){
	
	cout<<"digita el numero de filas de tu segunda matriz"<<endl;
	cin>>f;
	cout<<"digita el numero de columnas  de tu segunda matriz"<<endl;
	cin>>c;
	
	mat2= new int *[f];
	for(int i=0;i<f;i++)
	{
		mat2[i] = new int [c];
	}
	
	cout<<"rellenando la segunda matriz"<<endl;
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<"dijite el elemento ["<<i<<"] ["<<j<<"] de la matriz"<<endl;
			cin>>*(*(mat2+i)+j);
			
		}
	}
}


void var5(int **mat2,int f,int c){
	
	cout<<"\n\nmostrando la segunda matriz"<<endl;
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<*(*(mat2+i)+j)<<"  ";
		}
		cout<<"\n";
	}
	
}


void var3(int **mat,int **mat2,int f,int c){
	
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{
			*(*(mat+i)+j)+=*(*(mat2+i)+j);
		}
	}
}

void var4(int **mat,int f,int c){
	
	if(f==c){
		
	cout<<"\n resultado de la suma de matrices\n"<<endl;
	
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<*(*(mat+i)+j)<<"  ";
		}
		cout<<"\n";
	}
}
if(f!=c)
{
	cout<<"las matrises no son simetricas por lo tanto no se podra hacer la suma"<<endl;
}
	
}
