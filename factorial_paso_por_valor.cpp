#include<iostream>
#include<math.h>
using namespace std;

void dato();
void factorial(int num1);

int num1,x=1,y=0,z=1;

int main()
{
	dato();
    factorial(num1);


	return 0;
}

void dato(){
	
	cout<<"dame el limite superior de la serie de fibonacci"<<endl;
	cin>>num1;
	
}

void factorial(int num1){
	
	for(int i=1;i<num1;i++){
		z = x + y;
		cout<<z<<" ";
		x = y;
		y = z;		
	}
	
}
