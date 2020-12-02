#include<iostream>
#include<math.h>
using namespace std;
void dato();
void factorial(float x1, float y1,float x2, float y2);

float num1,num2,num3,num4;

int main()
{
	dato();
	factorial(num1,num2,num3,num4);
	
	return 0;
}

void dato(){
	
	cout<<"dame un valor para x1 "<<endl;
	cin>>num1;
	
	cout<<"dame un valor para y1 "<<endl;
	cin>>num2;
	
	cout<<"dame un valor para x2 "<<endl;
	cin>>num3;
	
	cout<<"dame un valor para y2 "<<endl;
	cin>>num4;
	
}

void factorial(float x1, float y1,float x2, float y2){

	cout<<" \n\n la distanmcia auclidiana es de  -->"<<sqrt(pow(x2-x1,2)+pow(y2-y1,2))<<endl;
	
}
