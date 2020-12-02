#include <iostream>
using namespace std;
int main(int argc, char** argv) 
{
	int nf,nc,num,opc;
	
	cout<<"digita el numero de columnas de tu matriz"<<endl;
	cin>>nc;
	
	cout<<"digita el numero de filas de tu matriz"<<endl;
	cin>>nf;
	
	float mat1[nf][nc],mat2[nf][nc],mat3[nf][nc];
	
	cout<<"\tCalculadora de matrices\n";
	cout<<"Operaciones\n";
	cout<<"1) Suma de dos matrices\n";
	cout<<"2) Resta de dos matrices\n";
	cout<<"3) multiplicacion de dos matrices\n";
	cout<<"4) transpuesta de una matriz \n";
	cout<<"5) Multiplicación de una matriz por un escalar\n";
	cout<<"Cual opcion desea escoger?: ";
	 cin>>opc;
	
	switch(opc)
	{
		case 1:
			cout<<"Matriz A\n";
			cout<<"Llenando la matriz A:\n";
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<"posicion["<<i<<"]["<<j<<"]: ";
					cin>>mat1[i][j];
				}
			}
			cout<<endl;
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<mat1[i][j]<<" ";
				}
				cout<<endl;
			}
			cout<<"\nMatriz B\n";
			cout<<"Llenando la matriz B:\n";
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<"posicion["<<i<<"]["<<j<<"]: ";
					cin>>mat2[i][j];
				}
			}
			cout<<endl;
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<mat2[i][j]<<" ";
				}
				cout<<endl;
			}
			cout<<"\nSuma de matriz A y B\n";
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					mat3[i][j]=mat1[i][j] + mat2[i][j];
				}
			}
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<mat3[i][j]<<" ";
				}
				cout<<endl;
			}
		break;
		case 2:
			cout<<"Matriz A\n";
			cout<<"Llenando la matriz A:\n";
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<"posicion["<<i<<"]["<<j<<"]: ";
					cin>>mat1[i][j];
				}
			}
			cout<<endl;
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<mat1[i][j]<<" ";
				}
				cout<<endl;
			}
			cout<<"\nMatriz B\n";
			cout<<"Llenando la matriz B:\n";
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<"posicion["<<i<<"]["<<j<<"]: ";
					cin>>mat2[i][j];
				}
			}
			cout<<endl;
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<mat2[i][j]<<" ";
				}
				cout<<endl;
			}
			cout<<"\nresta de matriz A y B\n";
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					mat3[i][j]=mat1[i][j] - mat2[i][j];
				}
			}
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<mat3[i][j]<<" ";
				}
				cout<<endl;
			}
		break;
		case 3:
			cout<<"Matriz A\n";
			cout<<"Llenando la matriz A:\n";
			
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<"posicion["<<i<<"]["<<j<<"]: ";
					cin>>mat1[i][j];
				}
				cout<<endl;
			}
			
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<mat1[i][j]<<" ";
				}
				cout<<endl;
			}
			
			cout<<"\nMatriz B\n";
			cout<<"Llenando la matriz B:\n";
			
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<"posicion["<<i<<"]["<<j<<"]: ";
					cin>>mat2[i][j];
				}
				cout<<endl;
			}
			
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<mat2[i][j]<<" ";
				}
				cout<<endl;
			}
			
			cout<<"\nmultiplicacion  de matriz A y B\n";
			
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					mat3[i][j]=0;
					for(int k=0;k<nf;k++)
					{
					   mat3[i][j]+=mat1[k][j] * mat2[i][k];
				    }
				}
			}
			
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<mat3[i][j]<<" ";
				}
				cout<<endl;
			}
		break;
		case 4:
			cout<<"Matriz A\n";
			cout<<"Llenando la matriz A:\n";
			
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<"posicion["<<i<<"]["<<j<<"]: ";
					cin>>mat1[i][j];
				}
			}
			
			cout<<"mostrando matriz original"<<endl;
			
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<mat1[i][j]<<" ";
				}
				cout<<endl;
			}
			
			cout<<"mostrando matriz tranzpuesta"<<endl;
			
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<mat1[j][i]<<" ";
				}
				cout<<endl;
			}
		break;
		case 5:
			cout<<"dame el numero por el cual multiplicaras la matriz"<<endl;
			cin>>num;
			
			cout<<"Matriz A\n";
			cout<<"Llenando la matriz A:\n";
			
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<"posicion["<<i<<"]["<<j<<"]: ";
					cin>>mat1[i][j];
				}
			}
			
			cout<<"mostrando matriz original"<<endl;
			
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<mat1[i][j]<<" ";
				}
				cout<<endl;
			}
			
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					mat2[i][j]=mat1[i][j]*num;
				}
				cout<<endl;
			}
			
			cout<<"mostrando el producto de la matriz por el escalar "<<endl;
			
			for(int i=0; i<nf; i++)
			{
				for(int j=0; j<nf; j++)
				{
					cout<<mat2[i][j]<<" ";
				}
				cout<<endl;
			}
		break;
	}
		
	return 0;
}
