#include<iostream>
#include<math.h>
using namespace std;
void dato();
void factorial(float conx,float r1, float r2,float r3, float v);

float num1,num2,num3,num4,num5;

int main()
{
	dato();
	factorial(num5,num1,num2,num3,num4);
	
	return 0;
}

void dato(){
	
	cout<<"preciona 1 si quieres un circuito serie y 2 si quieres un circuito paralelo  "<<endl;
	cin>>num5;
	
	cout<<"dame el valor de r1 "<<endl;
	cin>>num1;
	
	cout<<"dame el valor de r2 "<<endl;
	cin>>num2;
	
	cout<<"dame el valor de r3 "<<endl;
	cin>>num3;
	
	cout<<"dame el valor de la fuente  "<<endl;
	cin>>num4;
	
	
}

void factorial(float conx,float r1, float r2,float r3, float v){
    float  vt=0,it=0;
    
	if(conx==1){
		it=v/(r1+r2+r3);
		vt=v;
	}
	else{
		float aux=0;
		aux=(1/r1)+(1/r2)+(1/r3);
		it=1/aux;
		vt=v;
	}
	cout<<" la intencidad de corriente total con los datos obtenidos  es de -->"<<it<<endl;
	cout<<" \nla diferencia de potencial total con los datos  obtenidos  es de -->"<<vt<<endl;
}
