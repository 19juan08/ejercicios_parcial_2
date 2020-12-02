#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void var(int a ,float&,float&);


int main(){
	
	float a,r1,r2;

	
	cout<<"dame la circunferencia en grados "<<endl;
	cin>>a;
	
	
	var(a,r1,r2);
	
	cout<<"el radio de la circunferencia es de   --> "<<r1<<endl;
	cout<<"\n el area de la circunferencia es de  --> "<<r2<<endl;
	
	
	getch();
	return 0;
	
}

void var(int a,float& r1,float& r2){
	
    r1=a/6.2832;
	r2=3.1415*pow(r1,2);
}


