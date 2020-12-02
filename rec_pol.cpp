#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
using namespace std;

void var(int ,int ,float&,float&);


int main(){
	
	int a,b;
	float r1;
	float r2;

	
	cout<<"digita la parte real de tu numero "<<endl;
	cin>>a;
	
	cout<<"digita la parte imaginaria de tu numero "<<endl;
	cin>>b;
	
	var(a,b,r1,r2);
	
	cout<<"la amplitud polas es de --> "<<r1<<endl;
	cout<<"la face polar es de --> "<<r2<<endl;
	
	
	getch();
	return 0;
	
}

void var(int a,int b,float& r1,float& r2){
	
    r1=sqrt((a*a)+(b*b));
	r2=atan(b/a)*180/3.1416;
}


