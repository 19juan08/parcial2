#include <iostream>
#include <conio.h>
using namespace std;

struct estudiante{
	char nombre[60];
	int edad;
	int doc[15];
	int semestre;	
}p1;

void pedir_datos();
void mostrar_datos(estudiante);
int num1;

int main(){
	
	pedir_datos();
	mostrar_datos(p1);
	
	getch;
	return 0;
}

void pedir_datos(){
	
	cout<<"digita tu nombre"<<endl;
	cin.getline(p1.nombre,60,'\n');
	cout<<"\n\ndigita tu edad"<<endl;
	cin>>p1.edad;
	cout<<"\n\ndigita la cantidad de numeros de tu documento de identidad(max 15 numeros)"<<endl;
	cin>>num1;
	for(int i=0;i<num1;i++)
	{
		cout<<"digita el numero "<<i<<" de tu tarjeta de identidad"<<endl;
		cin>>p1.doc[i];
	}
	cout<<"\n\ndigita el semestre academico que vas cruzando"<<endl;
	cin>>p1.semestre;
		
}

void mostrar_datos(estudiante p){
	
	cout<<"\n\n\n\t los datos del estudiante son :"<<endl;
	cout<<"\n el nombre del estudiante es :\t"<<p.nombre<<endl;
	cout<<"\n la edad del estudiante es:\t"<<p.edad<<endl;
	cout<<"\n el docummento del estudiante es:\t";
	for(int i=0;i<num1;i++){
		cout<<p.doc[i]<<"  ";
	}
	cout<<"\n\n el semestre que esta cruzando el estudiante es: \t "<<p.semestre<<endl;
}

