#include<iostream>
using namespace std;
class Complex{

    private:
    int real;
    int imag;

    public:
    Complex(){
        this->real=0;
        this->imag=0;
    }
    Complex(int real, int imag){
        this->real=real;
        this->imag=imag;
    }
    void printRecord(void){
        cout<<"Real: "<<this->real<<endl;
        cout<<"Imag: "<<this->imag<<endl;
    }
};
int main(){
    Complex c1;
    c1.printRecord();

    int *ptrcmp = reinterpret_cast<int*>(&c1);
    *ptrcmp = 30;
    ptrcmp = ptrcmp + 1;
    *ptrcmp = 40;
    c1.printRecord();


    return 0;
}