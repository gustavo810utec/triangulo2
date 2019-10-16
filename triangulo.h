
//
// Created by gustavo.delatorre on 16/10/2019.
//

#ifndef WINDOWS_TRIANGULO_H
#define WINDOWS_TRIANGULO_H

using longitud_t = double;
using area_t = double;

class triangulo_t {
private:
    longitud_t lado1;
    longitud_t lado2;
    longitud_t lado3;
    longitud_t calcular_semiperimetro();

public:
//constructores
    triangulo_t();
    triangulo_t(longitud_t l1,longitud_t l2, longitud_t l3)
};


#endif //WINDOWS_TRIANGULO_H