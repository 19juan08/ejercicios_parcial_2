#include<iostream>
#include<math.h>
using namespace std;

 /*PARA HACER PRUEBAS UTILISAREMOS ESTOS DATOS S=6,2,8,10,15--->4.81------S=5,15,12,18,28---->8.44*/
 
int main(){
	
	int num1;
	float vec[num1];
	long double num2=0,num3=0,num4=0;
	
	cout<<"digta el total de numeros a evaluar "<<endl;
	cin>>num1;
	
	for(int i=0;i<num1;i++)
	{
		cout<<"digita el valor numero  ---->  "<<i<<" <---- para realisar las operaciones pertinentes"<<endl;
		cin>>vec[i];
		num2+=vec[i];	
	}
	
	for(int i=0;i<num1;i++)
	{
		num3+=pow(vec[i]-(num2/num1),2);	
	}
	cout<<"\n numero 3----->"<<num3<<endl;		
	cout<<"la desviacion estandar es      S=   "<<sqrt(num3 /( num1-1 ));	

	
	return 0;
}
