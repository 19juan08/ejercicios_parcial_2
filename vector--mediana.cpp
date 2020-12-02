#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;



int main()
{
	int num1;
	float num2=0,aux=0;
	
    cout<<"de que tamaño deseas que sea tu arreglo"<<endl;
    cin>>num1;
	
   float vec[num1];
   
   for (int i=0;i<num1;i++)
   {
   	cout<<"ingresa el valor  "<<i<<"  de tu arreglo:"<<endl;
   	cin>>vec[i];
  
   }
   
   for(int i=0;i<num1;i++)
   {
		for(int j=0;j<num1-1;j++){
			if(vec[j] > vec[j+1]){
				aux = vec[j];
				vec[j] = vec[j+1];
				vec[j+1] = aux;
			}
		}
	}
	
	for(int i=0;i<num1;i++)
   {
		cout<<vec[i]<<endl;
	}
	
	if((num1%2)==1)
	 {
	 	num2=vec[num1/2];
	 }
	 else
	 {
	 	num2=(vec[num1/2]+vec[(num1/2)-1])/2;
	 }
	 
	 cout<<"la mediana es de --> "<<num2<<endl;
	
   
	return 0;
}
