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
    Base(int num1,int num2){
        this->num1=num1;
        this->num1=num2;
    }
    void setNum1(int num1){
        this->num1=num1;
    }
    void setNum2(int num2){
        this->num2=num2;
    }
    int getNum1(void){
        return this->num1;
    } 
    int getNum2(void){
        return this->num2;
    }
    virtual ~Base(){

    }
};
class Derived: public Base{

    private:
    int num3;

    public:
    Derived(){
        this->num3=0;
    }
    Derived(int num3,int num1,int num2):Base(num1,num2){
        this->num3=num3;
    }
    void setNum3(int num3){
        this->num3=num3;
    }
    int getNum3(void){
        return this->num3;
    }
};
int main(){
    Base *ptrbase = new Derived();
    Derived *ptrderived = dynamic_cast<Derived*>(ptrbase);
    if(ptrderived!=NULL){
        ptrderived->setNum3(2000);
        ptrderived->setNum2(2000);
        ptrderived->setNum3(4000);
        
    }
    else{
        cout<<"NULL"<<endl;
    }

}


int main6(){
    Base *ptrbase = new Base();
    ptrbase->setNum1(200);
    ptrbase->setNum2(400);
    // ptrbase->setNum3(400); //not okay coz num3 is not member of base
    cout<<ptrbase->getNum1()<<endl;
    cout<<ptrbase->getNum2()<<endl;
    delete ptrbase;
    ptrbase = NULL;
}

int main7(){
    Base *ptrbase = new Derived( );
    Derived *ptrderived =static_cast<Derived*>(ptrbase);
    ptrderived->setNum1(1000);
    ptrderived->setNum2(2000);
    ptrderived->setNum3(3000);
    cout<<ptrderived->getNum1()<<endl;
    cout<<ptrderived->getNum2()<<endl;
    cout<<ptrderived->getNum3()<<endl;
    delete ptrderived;
    delete ptrbase;
    ptrderived = NULL;
    ptrbase = NULL;
    return 0;
    

}

int main4(){
    Base *ptrbase=new Derived();//upcasting
    Derived *ptrderived=(Derived*) ptrbase; //downcasing
    ptrderived->setNum1(1000);
    ptrderived->setNum2(2000);
    ptrderived->setNum3(3000);
    cout<<ptrderived->getNum1()<<endl;
    cout<<ptrderived->getNum2()<<endl;
    cout<<ptrderived->getNum3()<<endl;
    delete ptrderived;
    delete ptrbase;
    ptrderived = NULL;
    ptrbase = NULL;
    return 0;
}


int main3(){
    Derived *ptrderived = new Derived();
    ptrderived->setNum1(2000);
    ptrderived->setNum2(3000);
    ptrderived->setNum3(4000);
    cout<<ptrderived->getNum1()<<endl;
    cout<<ptrderived->getNum2()<<endl;
    cout<<ptrderived->getNum3()<<endl;
    delete ptrderived;
    ptrderived = NULL;
    return 0;
}

int main2(){
    Base *ptrbase=new Base();
    ptrbase->setNum1(5000);
    ptrbase->setNum2(6000);
    // ptrbase->setNum3(6000);
    cout<<ptrbase->getNum1()<<endl;
    cout<<ptrbase->getNum2()<<endl;
    delete ptrbase;
    ptrbase = NULL;
    return 0;
}


int main1(){
    Derived derived;
    derived.setNum1(5000);
    derived.setNum2(6000);
    derived.setNum3(7000);
    cout<<"num1: "<<derived.getNum1()<<endl;
    cout<<"num2: "<<derived.getNum2()<<endl;
    cout<<"num3: "<<derived.getNum3()<<endl;
    return 0;
}