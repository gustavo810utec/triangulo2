#include "triangulo.h"
#include <cmath>

//CONSTRUCTOR POR DEFECTO
triangulo_t::triangulo_t() {
    lado1=0;
    lado2=0;
    lado=0;
}
//CONSTRUCTOR POR PARAMETROS
area_t triangulo_t::calcular_area(){
    auto s= calcular_semiperimetro();
    auto& a = lado1;
    auto& b = lado2;
    auto& c = lado3;
    return sqrt ( s*(s-a)*(s-b)*(s-c));
}

longitud_t triangulo_t::calcular_perimetro(){
    return lado1+lado2+lado3;
}

longitud_t traingulo_t::calcular_semiperimetro(){
    return calcular_perimetro()/2;
}