#include <iostream>
#include "triangulo.h"

usinga namespace std;

void ejemplo(){

    //INGRESO DATOS
    longitud_t a;
    longitud_t b;
    longitud_t c;
    cout<<"INGRESE 3 lados:";
    cin>>a>>b>>c;

    //CREAR el objeto
    triangulo_t t1(a,b,c);

    //MOSTRAMOS EL RESULTADO
    cout<<"EL AREA ES:"<<t1.calcular_area()
        <<endl;
    cout<<"EL PERIMETRO ES:"
        <<t1.calcular_perimetro()
        <<endl;
}
int main(){
    ejemplo();
    return 0;
}