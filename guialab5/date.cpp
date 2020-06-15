#include "iostream"

using namespace std;

bool bisiesto(int year){
	return(((year%4==0)&&(year%100 != 00))||(year%400==0)); 
}	
 
int dias_mes(int mes, int year){
  int dias = 31;
  if (mes == 4/*abril*/||mes == 6/*junio*/||mes == 9/*septiembre*/||mes == 11/*noviembre*/){ 
  dias = 30;
  }
  else if (mes == 2){
  if (bisiesto(year)){ 
   dias = 29; 
  } else
  {
    dias = 28;
  }
}
  return dias;
}


int main ()
{
    int dia, mes , year;
    char barra;
    cout<<"Bienvenido/a ingresa la fecha que tu desees en el orden: dia/mes/año "<<endl;
    cin>>dia>>barra>>mes>>barra>>year;
    dia++;
    if (dia > dias_mes(mes,year))
    {
        dia = 1;
        mes++;
        if (mes > 12)
        {
          mes = 1;
          year++;
        }
    }
 cout<<" el siguiente dia de la fecha ingresada es: " << dia << '/' << mes << '/' << year;   
}