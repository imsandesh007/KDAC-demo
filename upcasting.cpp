#include<iostream>
using namespace std;
class Base{

    private:
    int num1;
    int num2;

    public:
    Base():num1(0),num2(0)
    { }
    Base(int num1, int num2):num1(num1),num2(num2)
    { }
    void printRecord( void ){
        cout<<"num1: "<<num1<<endl;
        cout<<"num2: "<<num2<<endl;
    }
    void showRecord( void ){
        cout<<"num1: "<<num1<<endl;
        cout<<"num2: "<<num2<<endl;    
    }
    
};
class Derived : public Base{

    private:
    int num3;

    public:
    Derived():num3(0)
    { }
    Derived(int num1,int num2,int num3):num3(num3),Base(num1,num2)
    { }
    void printRecord(){
        Base::printRecord();
        cout<<"num3: "<<num3<<endl;
    }
    void showRecord(){
        Base::showRecord();
        cout<<"num3: "<<num3<<endl;
    }
};
int main(){
    Derived d1(10,20,30);
    Base *ptrbase = &d1;
    ptrbase->printRecord();
    Derived *ptrderived=(Derived*)ptrbase;
    ptrderived->printRecord();
    delete ptrbase;
    delete ptrderived;
    ptrbase = NULL;
    ptrderived = NULL;
    return 0;
}

int main9(){
    Derived *ptrderived = new Derived(10,20,30);
    Base *ptrbase = ptrderived; //upcasting
    ptrbase->printRecord();
    ptrderived=(Derived*)ptrbase; //downcasting
    ptrderived->printRecord();
    delete ptrderived;
    ptrderived = NULL;
    return 0;
}

int main8(){
    Derived *ptrderived=new Derived(10,20,30);
    Derived *ptrderived1=new Derived(30,40,50);
    Base *ptrbase = (Base*) ptrderived1;
    ptrbase->printRecord();
    delete ptrderived;
    ptrderived = NULL;
    ptrbase = NULL;
    return 0;
}

int main7(){
    Derived derived(10,20,30);
    Base base;
    base = derived;
    base.printRecord();
    return 0;
}

int main6(){
    Base b1(10,20);
    Base b2;
    b2 = b1;
    b2.printRecord();
    return 0;
}

int main5(){
    Derived *ptrDerived= new Derived();
    ptrDerived->printRecord();
    delete ptrDerived;
    ptrDerived = NULL;
    return 0;
}

int main4(){
    Base *ptrBase=new Base();
    ptrBase->printRecord();
    delete ptrBase;
    ptrBase = NULL;
    return 0;
}

int main3(){
    Derived derived(1,2,3);
    derived.Base::printRecord();

}

int main2(){
    Derived derived(1,2,3);
    derived.Base::printRecord();
}


int main1(){
    Base base(1,2);
    base.printRecord();
}