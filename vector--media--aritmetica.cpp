#include<iostream>
using namespace std;

int main(){
	
	int num1;
	float vec[num1],num2;
	
	cout<<"digta el total de numeros a evaluar "<<endl;
	cin>>num1;
	
	for(int i=0;i<num1;i++)
	{
		cout<<"digita el valor numero"<<i<<"para realisar las operaciones pertinentes"<<endl;
		cin>>vec[i];
		num2+=vec[i];
		
	}
	
	cout<<"\n \nla operacion que se lleva a cavo es:"<<endl;
		
		for(int i=0;i<num1;i++)
	{
		cout<<vec[i]<<"/"<<num1<<" \t "<<"+"<<"\t";
	}
	
	cout<<"\n \nla media aritmetica es de :    "<<(num2/num1)<<endl;	
	
	
	
	
	return 0;
}
