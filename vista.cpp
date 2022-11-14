#include "vista.h"

Vista::Vista()
{
    controlador = new Controlador();
}

void Vista::actualizarNota()
{
    int nota = 0;
    do {
        cout << "Ingrese la nota 1: ";
        cin >> nota;
    }while (nota < 0 || nota > 10);
    controlador->actualizaNota(1, nota);
    cout << "Nota 1 actualizada!" << endl;
}

void Vista::imprimir()
{
    cout << controlador->visualizar();
}












