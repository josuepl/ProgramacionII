#include <iostream>
using namespace std;

class Persona{
//Atributos - Variables
private:
    string nombre;
    int edad;
    float peso, estatura;

//Funciones
   public:
    Persona(){//Constructor
        // Caracteristicas de Persona
        // por defecto
    }
    ~Persona(){
        //Limpiar o borrar el contenido en memoria
    }
    void comer();
    void dormir();
    void trabajar(){
        cout<<"Voy a trabajar"<<endl;
    }
    void imprimeDatos();
    //funciones set
    void setNombre(string auxNom);
    void setEdad(int auxEdad);
    void setEstatura(float auxEstatura);
    void setPeso(float auxPeso);
};

int main(){
    string auxNom;
    int auxEdad;
    float auxPeso, auxEstatura;
    Persona pers = Persona();
    cout <<"Programa que permite caracterizar a una persona"<<endl;
    pers.comer();
    pers.dormir();
    pers.trabajar();
    cout<<"Ingresa tu nombre:";
    cin>>auxNom;
    pers.setNombre(auxNom);
    cout<<"Ingresa tu edad:";
    cin>>auxEdad;
    pers.setEdad(auxEdad);
    cout<<"Ingresa tu estatura:";
    cin>>auxEstatura;
    pers.setEstatura(auxEstatura);
    cout<<"Ingresa tu peso:";
    cin>>auxPeso;
    pers.setPeso(auxPeso);
    pers.imprimeDatos();
    return 0;
}

void dormir(){
    cout<<"Ya estoy cansado"<<endl;
}
void Persona::dormir(){
    cout<<"Tengo sueno"<<endl;
}
void Persona::comer(){
    cout<<"Tengo Hambre"<<endl;
}
void Persona::imprimeDatos(){
    cout<<"Nombre: "<<this->nombre<<" Edad: "<<this->edad;
    cout<<" Estatura: "<<this->estatura<<" Peso: "<<this->peso<<endl;
}
void Persona::setEdad(int auxEdad){
    this->edad=auxEdad;
}
void Persona::setEstatura(float auxEstatura){
    this->estatura = auxEstatura;
}
void Persona::setNombre(string auxNom){
    this->nombre = auxNom;
}
void Persona::setPeso(float auxPeso){
    this->peso = auxPeso;
}