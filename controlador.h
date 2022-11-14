#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "estudiante.h"

class Controlador
{
private:
    Estudiante *modelo;
    float promedio();
public:
    Controlador();
    void actualizaNota(int nota, int valor);
    string visualizar();
};


#endif // CONTROLADOR_H
