#include<iostream>
using namespace std;
void dato();
void factorial(float num1, float num2);

float v,r;

int main()
{
	dato();
	factorial(v,r);
	
	return 0;
}

void dato(){
	
	cout<<"dame un valor de una  tencion(voltaje) "<<endl;
	cin>>v;
	
	cout<<"dame un valor de una resistencia "<<endl;
	cin>>r;
	
}

void factorial(float num1, float num2){
	
	cout<<" la intencidad de corriente obtenida con los datos dados es de -->"<<num1/num2<<endl;
	
}
