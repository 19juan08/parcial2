#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void var1();
void var3(int *,int);
void var4(int *,int);

int num1;
float num2=0,aux=0;
int *vec;

int main(){
	
	var1();
	cout<<"\n\n";
	var3(vec,num1);
	cout<<"\n\n";
	var4(vec,num1);
	
	delete [] vec;
	
	getch(); 
	return 0;
}

void var1(){
	
    cout<<"de que tamaño deseas que sea tu arreglo"<<endl;
    cin>>num1;
	
	vec[num1];
	
	vec= new int [num1];
	
	for(int i=0;i<num1;i++)
	{
		cout<<"digita el elemento numero ["<<i<<"] de tu arreglo unidimencional"<<endl;
		cin>>*(vec+i);
	}
	
}

void var3(int *vec,int num1){
	
	int aux=0;
	
	for(int i=0;i<num1;i++)
	{
		for(int j=0;j<num1-1;j++)
		{
			if(*(vec+j)>*(vec+j+1))
			{
				aux=*(vec+j);
				*(vec+j)=*(vec+j+1);
				*(vec+j+1)=aux;
				
			}
		}
	}
	
}

void var4(int *vec,int num1){
	
	cout<<"tu arreglo queda de la sigiente manera"<<endl;
	for(int i=0;i<num1;i++)
   {
		cout<<*(vec+i)<<endl;
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
	
	
}

