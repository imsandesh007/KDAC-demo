#include<iostream>
using namespace std;
class Date{
    private:
    int day;
    int month;
    int year;

    public:
    Date(void):day(0),month(0),year(0)
    { }
    Date(int day, int month, int year):day(day),month(month),year(year)
    { }
    void acceptRecord(){
        cout<<"Enter Date"<<endl;
        cout<<"Day: ";
        cin>>day;
        cout<<"Month: ";
        cin>>month;
        cout<<"Year: ";
        cin>>year;
    }
    void printRecord(){
        cout<<day<<":"<<month<<":"<<year<<endl;
    }
};
class Employee{
    private:
    string name;
    int empid;
    double salary;
    Date joindate;

    public: 
    Employee(void):name(""),empid(0),salary(0)
    { }
    Employee(string name, int empid, double salary, Date joindate): name(name),empid(empid),salary(salary),joindate(joindate)
    { }
    Employee(string name, int empid, double salary, int day, int month, int year): name(name),empid(empid),salary(salary),joindate(day,month,year)
    { }
    void acceptRecord(){
        cout<<"Enter Records: "<<endl;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter id: ";
        cin>>empid;
        cout<<"Enter salary: ";
        cin>>salary;
        this->joindate.acceptRecord();
    }
    void printRecord(){
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee id: "<<empid<<endl;
        cout<<"Employee salary: "<<salary<<endl;
        this->joindate.printRecord();
    }
};
int main(){
    Employee emp;
    emp.acceptRecord();
    emp.printRecord();
    return 0;
}