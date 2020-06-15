#include "iostream"

using namespace std;

 bool bisiesto(int date){
	if(((date%4==0)&&(date%100 != 00))||(date%400==0)) {
		return true;
 }
     else {
		return false;
	}
}

int main ()
{
    int date;
    
    cout<<endl;
    cout<<"Bienvenido: para conocer si un ano es bisiesto o no:"<<endl;
    cout<<"ingrese el ano a evaluar"<<endl;
    cin>>date;
    bool valor = bisiesto(date);

	if(valor){
		cout<<"El ano es bisiesto";
	} else{
		cout<<"El ano no es bisiesto";
	}

	return 0;
}
    