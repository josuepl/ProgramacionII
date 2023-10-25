#include <iostream>
using namespace std;
class Claxon{
    public:
    virtual void pitar()= 0;
};
class Volante{
    public:
    virtual void girar() =0;
};
class Auto : public Claxon, Volante{
    public:
    void pitar() override{
        cout<<"pip PIP"<<endl;
    }
    void girar() override{
        cout<<"girar a la izq \n";
        cout<<"girar derecha \n";
    }
};
int main(){
    Auto a1;
    a1.girar();
    a1.pitar();
}