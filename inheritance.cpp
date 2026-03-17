#include<iostream>
using namespace std;
class Person{

    private:
    string name;
    int age;
    
    public: 
    static int count;
    Person():name(""),age(0)
    { 
        cout<<"Person Parameter less constructor called"<<endl;
    }
    Person(string name, int age):name(name),age(age)
    {
        cout<<"Person parameterized constructor called:"<<endl;
     }
    static void f(void){
        cout<<"static void (void)"<<endl;
    }
    void printRecords(void){
        cout<<"Person Name: "<<name<<endl;
        cout<<"Person age: "<<age<<endl;
        
    }
    ~Person(){
        cout<<"~Person destructor called: "<<endl;
    }
};
int Person::count = 0;
class Employee : public Person{
    
    private:
    int empid;
    double salary;

    public:
    Employee():empid(0),salary(0)
    { 
        cout<<"Employee parameterless constructor called"<<endl;
    }
    Employee(int empid, double salary, string name, int age):empid(empid), salary(salary),Person(name,age)
    { 
        cout<<"Employee parameterized constructor called"<<endl;
    }
    void printRecords(){
        cout<<"Emp id: "<<empid<<endl;
        cout<<"Salary: "<<salary<<endl;
        Person::printRecords();

    }
    ~Employee(){
        cout<<"~Employee destructor called"<<endl;
    }
    
};
int main(){
    Employee e(1,2000,"sandesh",24);
    e.printRecords();
}

// int main5(){
//     Person p("sandesh",24);
//     p.showRecords();
// }


// int main4(){
//     Employee emp;
//     emp.displayRecords();
// }

// int main3(){
//     Employee emp;
//     emp.displayRecords();
// }

// int main2(){
    
    
//     Employee::f();
//     Person::f();



    
// }

// int main1(){
//     Employee emp;
//     Person p;
//     p = emp;
//     cout<<sizeof(p)<<endl;
//     return 0;
// }