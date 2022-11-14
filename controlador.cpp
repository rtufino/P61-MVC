#include "controlador.h"

float Controlador::promedio()
{
    return (modelo->getNota1() + modelo->getNota2() + modelo->getNota3()) / 3.0;
}

Controlador::Controlador()
{
    this->modelo = new Estudiante("Ariel", 5, 7, 9);
}

void Controlador::actualizaNota(int nota, int valor)
{
    switch (nota) {
    case 1:
        modelo->setNota1(valor);
        break;
    case 2:
        modelo->setNota2(valor);
        break;
    case 3:
        modelo->setNota3(valor);
        break;
    }
}

string Controlador::visualizar()
{
    string str = "Estudiante: " + modelo->getNombre() + "\n" +
            " Nota 1: " + to_string(modelo->getNota1()) + "\n" +
            " Nota 2: " + to_string(modelo->getNota2()) + "\n" +
            " Nota 3: " + to_string(modelo->getNota3()) + "\n" +
            " Promedio: " + to_string(promedio()) + "\n";
    return str;
}














