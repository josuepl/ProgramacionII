#include<iostream>
using namespace std;

class Geometria{
    protected:
    int lado, base, altura;
    float radio, area, perimetro;

    public:
    Geometria(){
    };
    float calcArea(int lado);
    float calcArea(float radio);
    float calcArea(int base, int altura);

    float calcPer(int lado);
    float calcPer(float radio);
    float calcPer(int base, int altura);
    
};
float Geometria::calcPer(int lado){
    return (4*lado);
}
float Geometria::calcPer(float radio){
    return (3.1416*2*radio);
}
float Geometria::calcPer(int base, int altura){
    return (2*base + 2 *altura);
}

float Geometria::calcArea(int lado){
    return (lado*lado);
}
float Geometria::calcArea(float radio){
    return (3.1415*radio*radio);
}
float Geometria::calcArea(int base, int altura){
    return (base*altura);
}

class Cuadrado : public Geometria{

    public:
    Cuadrado(int lado){
        this->lado = lado;
    };
};
class Rectangulo : public Geometria{

    public:
    Rectangulo(int base, int altura){
        this->base = base;
        this->altura = altura;
    };
};
class Circulo : public Geometria{

    public:
    Circulo(float radio){
        this->radio = radio;
    };
};

int menu(){
    int opc;
    cout<<"Este programa calcula los perimetros y areas de las siguientes figuras:"<<endl;
    cout<<"1. Cuadrado"<<endl;
    cout<<"2. Rectangulo"<<endl;
    cout<<"3. Circulo"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"Ingresa la opcion deseada: ";
    cin>>opc;
    return opc;
}
int main(){
    int opc;
    int lado, base, altura;
    float radio;
    do{
        opc =  menu();
        switch (opc)
        {  
        case 1: {//Cuadrado
            cout<<"ingresa el valor del lado: "; cin>>lado;
            Cuadrado cuad = Cuadrado(lado);
            cout<<"Area: "<<cuad.calcArea(lado)<<" Perimetro: "<<cuad.calcPer(lado)<<endl;
        }
            break;
        case 2:{//Rectangulo
            cout<<"ingresa el valor de la base: "; cin>>base;
            cout<<"ingresa el valor de la altura: "; cin>>altura;
            Rectangulo rect = Rectangulo(base, altura);
            cout<<"Area: "<<rect.calcArea(base, altura)<<" Perimetro: "<<rect.calcPer(base, altura)<<endl;    
        }
            break;
        case 3:{//Circulo
            cout<<"ingresa el valor del radio: "; cin>>radio;
            Circulo  circ = Circulo(radio);
            cout<<"Area: "<<circ.calcArea(radio)<<" Perimetro: "<<circ.calcPer(radio)<<endl;                
        }
            break;
        default:
            break;
        }
    }while(opc!= 4);


    return 0;

}

