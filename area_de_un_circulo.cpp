#include<iostream>
#include<math.h>
using namespace std;

void dato();
void factorial(int num1);

int num1;

int main()
{
	dato();
    factorial(num1);


	return 0;
}

void dato(){
	
	cout<<"dame el radio del circulo "<<endl;
	cin>>num1;
	
}

void factorial(int num1){
	float area=0;
	area=3.1425*pow(num1,2);
	
	cout<<"el area del circulo es de  -->  "<<area<<endl;
}
