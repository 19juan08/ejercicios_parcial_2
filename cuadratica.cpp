#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void var2(int a,int b,int c,float&,float&);



int main(){
	
	int a,b,c;
	float r1,r2;
	
	cout<<"digita la exprecion a"<<endl;
	cin>>a;
	
	cout<<"digite la exprecion b "<<endl;
	cin>>b;
	
	cout<<"digite la exprecion c "<<endl;
	cin>>c;
	
	var2(a,b,c,r1,r2);
	
	cout<<"el resultado positivo de la ecuacion cuadratica es "<<r1<<endl;
	cout<<"el resultado negativo de la ecuacion cuadratica es "<<r2 <<endl;
	
	
	getch();
	return 0;
	
}

void var2(int a,int b,int c,float& r1,float& r2){
	
	r1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
	r2=(-b-(sqrt(b*b-4*a*c)))/(2*a);
	
}
