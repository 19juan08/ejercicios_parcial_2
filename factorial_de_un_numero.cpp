#include<iostream>
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
	
	cout<<"dame un numero "<<endl;
	cin>>num1;
	
}

void factorial(int num1){
	
	int fact=1;
	for(int i=1;i<=num1;i++)
	{
		fact=fact*i;
	}
	
	cout<<"el factorial de  "<<num1<<"  es -->  "<<fact<<endl;
}
