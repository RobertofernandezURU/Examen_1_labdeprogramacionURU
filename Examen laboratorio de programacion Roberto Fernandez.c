#include<stdio.h>

int main()
{
// se declara la cantidad de notas si el valor cambia
const int CantidadNotas=5;
double notas [CantidadNotas];

//Se solicitan las notas
for (int i = 0;i< CantidadNotas; i++)

{
cout <<"Ingrese la nota por favor"<< i+1<<": ";
//Se guarda en el arreglo
cin >> notas[i];
}

double sumatoria=0;
for (int i =0; i< CantidadNotas; i++)

{
    sumatoria =sumatoria+notas[i];
    cout << "nota" <<i+1<<"
    Calificacion: "<<notas[i] << end1;
}
double PromedioFinal = sumatoria/CantidadNotas;

string categoria = "";
if (PromedioFinal>18)
{
    categoria= "Sobresaliente-Aprobado";
}
else if (PromedioFinal>15)
{
    categoria= "Muy Bueno-Aprobado";
}
else if (PromedioFinal>12)
{
    categoria= "Bueno-Aprobado";
}
else if (PromedioFinal>9)
{
    categoria= "Regular-Aprobado";
}
else if (PromedioFinal<10)
{
    categoria= "Mejorable-No-aprobado";
}
else if (PromedioFinal<6)
{
    categoria= "Deficiente-NO-aprobado";
}


//Se imprimen los Resultados
cout << "Total de Notas parciales:"<<sumatoria<<end1;
cout << "Promedio de Notas parciales:"<<PromedioFinal<<end1;
cout << "Nota Final:"<<

