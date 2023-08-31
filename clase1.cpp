#include <iostream>
using namespace std;

class figGeo{
    int lado, altura, base;
    float radio, valPer;
    //constructor
    public:
    figGeo(){
        this->valPer= 0;
    };
    figGeo(int lado){
        this->lado = lado;
    };
    figGeo(float radio){
        this->radio = radio;
    };
    figGeo(int base, int altura){
        this->base = base;
        this->altura = altura;
    };
    float perimetro(int lado);
    float perimetro(float radio);
    float perimetro(int base, int altura);
};

int main(){
    int lado, base, altura;
    float radio;
    cout<<"ingresa el valor del radio: "; cin>>radio;
    cout<<"ingresa el valor del lado: "; cin>>lado;
    cout<<"ingresa el valor de la base: "; cin>>base;
    cout<<"ingresa el valor de la altura: "; cin>>altura;
    
    figGeo figura1 = figGeo();
    figGeo cuadrado = figGeo(lado);
    figGeo rectangulo = figGeo(base, altura);
    figGeo circulo = figGeo(radio);
    cout<<"Perimetro del cuadrado: "<<cuadrado.perimetro(lado)<<endl;
    cout<<"Perimetro del rectangulo: "<<rectangulo.perimetro(base, altura)<<endl;
    cout<<"Perimetro del circulo: "<<circulo.perimetro(radio)<<endl;


}


float figGeo::perimetro(int lado){
    return (4*lado);
}
float figGeo::perimetro(float radio){
    return (3.1416*2*radio);
}
float figGeo::perimetro(int base, int altura){
    return (2*base + 2 *altura);
}