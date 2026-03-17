#include<iostream>
using namespace std;
class Date{
    
    private:
    int day;
    int month;
    int year;
     
    public:
    Date():day(0),month(0),year(0)
    { }
    Date(int day, int month, int year): day(day),month(month),year(year)
    { }
    void print(){
        cout<<day<<":"<<month<<":"<<year;

    }
    void acceptRecord(){
        cout<<"enter records: "<<endl;
        cout<<"enter day: "<<endl;
        cin>>day;
        cout<<"enter month"<<endl;
        cin>>month;
        cout<<"enter year: "<<endl;
        cin>>year;
    }

};
class Customer{
    
    private:
    int id;
    string name;
    Date *dob;
    
    public:
    Customer():id(0),name("")
    { }
    Customer(int id, string name) : id(id), name(name)
    {
        dob = NULL;
    }
    Customer(int id, string name,int day, int month, int year) : Customer(id,name)
    {
        dob= new Date(day,month,year);
    }
    void acceptRecord(){
        cout<<"enter records: "<<endl;
        cout<<"enter id: ";
        cin>>id;
        cout<<"enter name";
        cin>>name;
    }
    void acceptDate(){
        dob=new Date();
        dob->acceptRecord();
    }
    void printRecord(){
        cout<<"ID is: "<<id<<endl;
        cout<<"Name is: "<<name<<endl;
        if(dob!=NULL){
            dob-> print( );
        }

    }
    ~Customer(){
        if(dob!=NULL){
            delete dob;
            dob = NULL;
        }
    }
};
int main(){
    Customer c;
    c.acceptRecord();
    c.acceptDate();
    c.printRecord();
    return 0;
}