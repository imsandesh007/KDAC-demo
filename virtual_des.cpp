#include<iostream>
using namespace std;
class Base{

    private: 
    int num1;
    int num2;

    public:
    Base():num1(0),num2(0)
    { 
        cout<<"Base parameterless constructor called"<<endl;
    }
    Base(int num1,int num2):num1(num1),num2(num2)
    { 
        cout<<"Base parameterized constructor called"<<endl;

    }
    void acceptRecord(){
        cout<<"Enter num1: ";
        cin>>this->num1;
        cout<<"Enter num2: ";
        cin>>this->num2;
        
    }
    void printRecord(){
        cout<<"Num1: "<<num1<<endl;
        cout<<"Num2: "<<num2<<endl;
    }
    virtual ~Base(){
        cout<<"Base Destructor called"<<endl;
    }
    
};
class Derived: public Base{
    
    private: 
    int num3;
    int num4;
    
    public:
    Derived():num3(0),num4(0)
    { 
        cout<<"Derived parameterless constructor called"<<endl;
    }
    Derived(int num3,int num4, int num1, int num2):num3(num3),num4(num4),Base(num1,num2){
        
        cout<<"Derived parameterized constructor called"<<endl;
    }
    void acceptRecord(){
        Base::acceptRecord();
        cout<<"Enter num3: ";
        cin>>this->num3;
        cout<<"Enter num4: ";
        cin>>this->num4;

    }
    void printRecord(){
        Base::printRecord();
        cout<<"Num3: "<<this->num3<<endl;
        cout<<"Num4: "<<this->num4<<endl;
    }
    ~Derived(){

        cout<<"Derived destructor called"<<endl;
    }

};
int main1(){
    Derived d1;
    d1.acceptRecord();
    d1.printRecord();
    return 0;
}

int main(){
    Base *ptrbase = new Derived();
    Derived *ptrderived = (Derived*) ptrbase;
    ptrderived->acceptRecord();
    ptrderived->printRecord();
    delete ptrderived;
    delete ptrbase;
    ptrderived = NULL;
    ptrbase = NULL;
    return 0;
}