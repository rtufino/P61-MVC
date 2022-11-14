#include "vista.h"

Vista::Vista()
{
    controlador = new Controlador();
}

void Vista::actualizarNota()
{
    int nota = 0;
    int valor;
    do {
        cout << "Ingrese la nota a modificar: ";
        cin >> nota;
    }while (nota < 0 || nota > 3);
    do {
        cout << "Ingrese el nuevo valor de la nota: ";
        cin >> valor;
    }while (valor < 0 || valor > 10);
    controlador->actualizaNota(nota, valor);
    cout << "Nota "<< nota <<" actualizada!" << endl;
}

void Vista::imprimir()
{
    cout << controlador->visualizar();
}












