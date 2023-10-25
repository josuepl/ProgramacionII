#include <iostream>
using namespace std;

class Principal{
    public:
    virtual void func() = 0;
};

class Pri{
    public:
    virtual void func2()=0;
};

class Secundaria: public Principal, Pri {
    public:
    void func() override{
        cout<<"Funcion de la clase Principal"<<endl;
    }
    void func2() override{
        cout<<"Funcion de clase Pri"<<endl;
    }
};

int main(){
    Secundaria s1;
    s1.func();
    s1.func2();
    return 0;
}