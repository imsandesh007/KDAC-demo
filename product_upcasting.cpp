#include<iostream>
using namespace std;
class Product{

    private:
    string title;
    int price;

    public:
    Product(){
        this->title="";
        this->price=0;
    }
    Product(string title, int price){
        this->title=title;
        this->price=price;
    }
    virtual void acceptRecord(){
        cout<<"Enter title: ";
        cin.ignore();
        getline(cin,title);
        // cin>>title;
        cout<<"Enter price: ";
        cin>>price;
    }
    virtual void printRecord(){
        cout<<"Title: "<<title<<endl;
        cout<<"Price: "<<price<<endl;
        
    }
};
class Book: public Product{

    private: 
    int pagecount;

    public:
    Book(){
        this->pagecount=0;
    }
    Book(int pagecount){
        this->pagecount=pagecount;
    }
    void acceptRecord(){
        Product::acceptRecord();
        cout<<"Enter Page Count: ";
        cin>>pagecount;
    }
    void printRecord(){
        Product::printRecord();
        cout<<"Page count is: "<<pagecount<<endl;
    }

};
class Tape: public Product{

    private: 
    int playtime;

    public:
    Tape(){
        this->playtime=0;

    }
    Tape(int playtime){
        this->playtime=playtime;

    }
    void acceptRecord(){
        Product::acceptRecord();
        cout<<"Enter Playtime: ";
        cin>>playtime;
    }
    void printRecord(){
        Product::printRecord();
        cout<<"Playtime is: "<<playtime;
    }

};
int main(){
    int choice;

    do
    {
        cout<<"0.Exit"<<endl;
        cout<<"1.Book"<<endl;
        cout<<"2.Tape"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        Product *ptr = NULL;
        switch(choice){
            case 1:{
                ptr = new Book;
                break;
            }
            case 2:{
                ptr= new Tape;
                break;
            }
        }
        if(ptr!=NULL){
            ptr->acceptRecord();
            ptr->printRecord();
            delete ptr;
            ptr = NULL;
        

        }


    } while (choice!=0);
    return 0;
    
}