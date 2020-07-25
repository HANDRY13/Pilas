// Quitar elemtos de la pila        

#include<iostream>
#include<conio.h>
#include<stdlib.h> //New
using namespace std;

struct Nodo
{
	
	int dato;
	Nodo *siguiente;

};

void agregarpila(Nodo *&, int); //Prototipo de funcion
void sacarpila(Nodo *&,int &);

int main()

{
	Nodo *pila = NULL;
	int dato;
	
	
	
	cout<<"Ingrese un numero: ";
	cin>>dato;
	agregarpila(pila,dato);
	
	cout<<"Ingrese otro numero: ";
	cin>>dato,
	agregarpila(pila,dato);
	
	cout<<"Sacando los elementos de la pila: ";
	while(pila != NULL)
{
	sacarpila(pila,dato);
	if(pila != NULL)
	{
		cout<<dato<<" , ";
	}
	else{
		cout<<dato<<" , ";
	}
}
	
	
    getch();
    return 0;
	
}

void agregarpila(Nodo *&pila,int n)

{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila,
	pila =  nuevo_nodo;
	
	cout<<"Elemento "<<n<< " Agregado a PILA Correctamente"<<endl;
}

void sacarpila(Nodo *&pila,int &n)

{
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
