#include <iostream>
#include<math.h>
using namespace std;
int main(int argc, char** argv) 
{

	int opc;
	
	cout<<"\tCalculadora de momentos estadisticos\n";
	cout<<"Operaciones\n";
	cout<<"1) media aritmetica\n";
	cout<<"2) desviacion estandar\n";
	cout<<"3) media geometrica\n";
	cout<<"4) mediana \n";
	cout<<"5) sesgo\n";
	cout<<"Cual opcion desea escoger?: ";
	 cin>>opc;
	
	int num1;
	float num2=0,num3=0,num4=0,num5=0,num6=0,num7=0,num8=0,aux=0,moda=0,sesgo=0;
	float vec[100];
	
	switch(opc)
	{
		case 1:
			
	
	cout<<"digta el total de numeros a evaluar "<<endl;
	cin>>num1;
	
	vec[num1];
	
	for(int i=0;i<num1;i++)
	{
		cout<<"digita el valor numero"<<i<<"para realisar las operaciones pertinentes"<<endl;
		cin>>vec[i];
		num2+=vec[i];
		
	}
	
	cout<<"\n \nla operacion que se lleva a cavo es:"<<endl;
		
		for(int i=0;i<num1;i++)
	{
		cout<<vec[i]<<"/"<<num1<<" \t "<<"+"<<"\t";
	}
	
	cout<<"\n \nla media aritmetica es de :    "<<(num2/num1)<<endl;
			
		break;
		
		case 2:
	
	cout<<"digta el total de numeros a evaluar "<<endl;
	cin>>num1;
	
	vec[num1];
	
	for(int i=0;i<num1;i++)
	{
		cout<<"digita el valor numero  ---->  "<<i<<" <---- para realisar las operaciones pertinentes"<<endl;
		cin>>vec[i];
		num2+=vec[i];	
	}
	
	for(int i=0;i<num1;i++)
	{
		num3+=pow(vec[i]-(num2/num1),2);	
	}
			
	cout<<"la desviacion estandar es      S=   "<<sqrt(num3 /( num1-1 ));
			
		break;
		case 3:
	
	cout<<"digta el total de numeros a evaluar "<<endl;
	cin>>num1;
	cout<<"digta el exponente de la raiz "<<endl;
	cin>>num4;
	
	num2=1;
	num3=0;
	vec[num1];
	
	for(int i=0;i<num1;i++)
	{
		cout<<"digita el valor numero  ---->  "<<i<<" <---- para realisar las operaciones pertinentes"<<endl;
		cin>>vec[i];
		num2*=vec[i];	
	}
		
	cout<<"la media geometrica  es      G=   "<<pow(num2,1/num4);
			
		break;
		case 4:
	
    cout<<"de que tamaño deseas que sea tu arreglo"<<endl;
    cin>>num1;
	
   vec[num1];
   
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
			
			
		break;
		case 5:
	
    cout<<"de que tamaño deseas que sea tu arreglo"<<endl;
    cin>>num1;
	
    vec[num1];
   
   for (int i=0;i<num1;i++)
   {
   	cout<<"ingresa el valor  "<<i<<"  de tu arreglo:"<<endl;
   	cin>>vec[i];
    num5+=vec[i];  
   }
   
   num2=-1;
   for(int i=0;i<num1;i++)
   {
   	num3=0;
   	for(int j=0;j<num1;j++)
   	{
   		if(vec[i]==vec[j])
   		{
   			num3+=1;
		}
    }
    if(num3>num2)
    {
    	moda=vec[i];
    	num2=num3;
	}
   }

	
	for(int i=0;i<num1;i++)
	{
		num6+=pow(vec[i]-(num5/num1),2);	
	}		
	
	sesgo=((num5/num1)-moda)/sqrt(num6 /( num1-1 ));
	
	cout<<"\n el sesgo tiene un valor de --> "<<sesgo<<endl;
			
		break;
	}
		
	return 0;
}
