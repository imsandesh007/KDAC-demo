#include<iostream>
using namespace std;
class BOX{
    private:
    float length;
    float width;
    float heigth;

    public:
    BOX(){
        this->length=1;
        this->width=1;
        this->heigth=1;
        cout<<"Parameterized constructor called"<<endl;
    }
    BOX(float a){
        length = a;
        width = a;
        heigth = a;
        cout<<"single parameterized constructor called"<<endl;
    }
    BOX(float l,float w,float h){
        length = l;
        width = w;
        heigth = h;
        cout<<"3 parameterized constructor called"<<endl;
    }
    void printVolume(){
        cout<<length*width*heigth<<endl;
    }
    void acceptVolume(){
        cout<<"Enter the values: "<<endl;
        cin>>length>>width>>heigth;
    }
};
int main(){
    int choice;
    do{
        cout<<"Enter what you want: "<<endl;
        cout<<"1.calculate volume with default values: "<<endl;
        cout<<"2.calculate volume with length, breadth, height with same value: "<<endl;
        cout<<"3.calculate volume with different length, breadth and height: "<<endl;
        cout<<"4.exit"<<endl;
        cin>>choice;

        switch(choice){
            case 1:{
                BOX b1;
                b1.printVolume();
                break;
            }
            case 2:{
                int a;
                cout<<"Enter number: ";
                cin>>a;
                BOX b2(a);
                b2.printVolume();
                break;
            }
            case 3:{
                float l,w,h;
                BOX b3(l,w,h);
                b3.acceptVolume();
                b3.printVolume();
                break;
            }
            case 4:{
                if(choice==0){
                    return 0;
                }else{
                    return 1;
                }
            }
            
        }
    }while(choice!=0);
    return 0;
}