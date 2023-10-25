#include <iostream>
using namespace std;
class Cuenta{
    protected:
    string nombre;
    string email;
    public:
    Cuenta(){  }
    string getName(){return this->nombre;}
    void setName(string nomb){this->nombre = nomb;}
    string getEmail(){return this->email;}
    void setEmail(string email){this->email = email;}
};
class Contacto{
    string email;
    string numMov;
    protected:
    string nombre;
    string metodoContactoPrim;
    public:
    string getNombre(){return this->nombre;}
    void setNombre(string nombre){this->nombre = nombre;}
    string getMetContPrim(){return this->metodoContactoPrim;}
    void setMetContPrim(string metodo){this->metodoContactoPrim = metodo;}
};
int menu();
int main(){
    Cuenta listUsr[20];
    Contacto listCont[20];
    int opc;
    int ixUsr = 0, ixCon = 0;
    do{
        opc = menu();
        switch (opc)
        {
        case 1:{
            Cuenta usr;
            string nombre, email;
            if(ixUsr == 10){
                cout<<"Se han registro el max de usr\n";
                break;
            }
            else{
                cout<<"Ingresa tu nombre: ";
                cin>>nombre;
                cout<<"Ingresa tu email: ";
                cin>>email;
                usr.setName(nombre);
                usr.setEmail(email);
                cout<<"Usuario registrado: "<<endl;
                cout<<"User: "<<usr.getName();
                cout<<"Email: "<<usr.getEmail()<<endl;
                listUsr[ixUsr] = usr;
                ixUsr= ixUsr + 1;
            }

            break;
        }
        default:
            break;
        }
    }while(opc!=4);

    return 0;
}

int menu(){
    int opc;
    cout<<"Programa que Administra un libro de contacto\n";
    cout<<"1) Registrar usuario"<<endl;
    cout<<"2) Registrar contacto"<<endl;
    cout<<"3) Validar usuario"<<endl;
    cout<<"4) Salir"<<endl;
    cout<<"Ingresa la opcion deseada: ";
    cin>>opc;
    return opc;
}