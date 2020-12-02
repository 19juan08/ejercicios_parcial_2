#include<iostream>
#include<math.h>
using namespace std;

 /*PARA HACER PRUEBAS UTILISAREMOS ESTOS DATOS  1) G=4,9,8,6,5,4,2<---- RAIZ=7 ----->4.91 
2)G=1,2,3,4,5<---RAIZ=6 ---->2.22*/
 
int main(){
	
	int num1;
	float vec[num1];
	long double num2=1,num3=0,num4;
	
	cout<<"digta el total de numeros a evaluar "<<endl;
	cin>>num1;
	cout<<"digta el exponente de la raiz "<<endl;
	cin>>num4;
	
	for(int i=0;i<num1;i++)
	{
		cout<<"digita el valor numero  ---->  "<<i<<" <---- para realisar las operaciones pertinentes"<<endl;
		cin>>vec[i];
		num2*=vec[i];	
	}
		
	cout<<"la media geometrica  es      G=   "<<pow(num2,1/num4);	

	
	return 0;
}
