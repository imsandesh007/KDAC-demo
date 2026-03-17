#include<iostream>
using namespace std;
class Base{

    private:
    int num1;
    int num2;

    public:
    Base(){
        this->num1=0;
        this->num2=0;
    }
    static void f1(){
        cout<<"Base::f1"<<endl;
    }
    static void f2(){
        cout<<"Base::f2"<<endl;
    }
    static void f3(){
        cout<<"Base::f3"<<endl;
    }
    void f4(){
        cout<<"Base::f4"<<endl;
    }
    void f5(){
        cout<<"Base::f5"<<endl;
    }
};
class Derived:public Base{
    
    private:
    int num3;
    
    public:
    static void f1(){
        cout<<"Derived::f1"<<endl;
    }
    void f2(){
        cout<<"Derived::f2"<<endl;
    }
    void f4(){
        cout<<"Derived::f4"<<endl;
    }
    static void f5(){
        cout<<"Derived::f5"<<endl;
    }
    static void f6(){
        cout<<"Derived::f6"<<endl;
    }

};
int main(){
    Base *ptrbase=new Derived();
    ptrbase->f1();
    ptrbase->f2();
    ptrbase->f3();
    ptrbase->f4();
    ptrbase->f5();
    Derived *ptrderived=(Derived*) ptrbase;
    ptrderived->f1();
    ptrderived->f2();
    // ptrderived->f3();
    ptrderived->f4();
    ptrderived->f5();
    ptrderived->f6();

    // ptrbase->f1();
    // ptrbase->f1();
}