#include "iostream"

using namespace std;

int MCD(int mayor, int menor){
    int residuo;
        residuo= mayor % menor;
        if(residuo !=0);{ 
           mayor= menor;
           menor= residuo;
    }
    
  }
  
  



int main()
{
    int mayor, menor , residuo;
    cout<<"Bienvenido \npara realizar el MCD de dos numeros"<<endl;
    cout<<"Ingrese el numero mayor"<<endl;
    cin>>mayor;
    cout<<"\nIngrese el numero menor"<<endl;
    cin>>menor;
    cout<<"\nEl MCD es "<<MCD(mayor, menor)<<endl;

 return 0;   
}