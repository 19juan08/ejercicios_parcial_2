#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float var(float& ,float&,float&);
float var2(float& ,float&,float&);

int main(){
	
    float a,b,c;
	
	cout<<"dame el primer numero "<<endl;
	cin>>a;
	
	cout<<"dame el segundo numero "<<endl;
	cin>>b;
	
	cout<<"dame el tercer numero "<<endl;
	cin>>c;
	
	
	
	
	cout<<" \n\nel mayor de los numeros es   --> "<<var(a,b,c)<<endl;
	cout<<"\nel menor de los numeros es  --> "<<var2(a,b,c)<<endl;
	
	
	getch();
	return 0;
	
}

float var(float& a ,float& b,float& c){
	float mayor;
	if(a>b && a>c)
	{
        mayor=a;		
	}
	if(b>a && b>c)
	{
        mayor=b;		
	}
	if(c>a && c>b)
	{
        mayor=c;		
	}
	
      return mayor;

}

float var2(float& a,float& b,float& c){
	float menor;
	if(a<b && a<c)
	{
        menor=a;		
	}
	if(b<a && b<c)
	{
        menor=b;		
	}
	if(c<a && c<b)
	{
        menor=c;		
	}
	
      return menor;

}


