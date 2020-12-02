#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void var(int ,float&,float&);


int main(){
	
	float r1,r2;
    int a;
	
	cout<<"dame el valor en pesos colombianos "<<endl;
	cin>>a;
	
	
	var(a,r1,r2);
	
	cout<<"\nla convercion a dolares da un valor de   --> "<<r1<<endl;
	cout<<"la convercion a euros da un valor de --> "<<r2<<endl;
	
	
	getch();
	return 0;
	
}

void var(int a,float& r1,float& r2){
	float dol=3600,eur=4315;
    r1=a/dol;
	r2=a/eur;

}

