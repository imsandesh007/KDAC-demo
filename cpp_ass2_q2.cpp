#include<iostream>
using namespace std;
class TollBooth{
    private: 
    double total_amount;
    int car_paying;
    int no_car_paying;

    public:
    TollBooth(){
        total_amount = 0;
        car_paying = 0;
        no_car_paying = 0;
    }    

    void payingCars(){
        ++this->car_paying;
        this->total_amount += 0.50;
    }
    void noPayingCars(){
        ++this->no_car_paying;

    }
    void printOnConsole(){
        cout<<"total amount: "<<total_amount<<endl;
        cout<<"total cars: "<<car_paying+no_car_paying<<endl;
        cout<<"no car paying: "<<no_car_paying<<endl;
        cout<<"car paying: "<<car_paying<<endl;

    }
};
int main(){
    TollBooth t1;
    int choice;
    do{
        cout<<"Enter what you want: "<<endl;
        cout<<"1.paying car: "<<endl;
        cout<<"2.no paying car: "<<endl;
        cout<<"3.total mount and cars: "<<endl;
        cout<<"4.exit"<<endl;
        cin>>choice;

        switch(choice){
            case 1:{
                t1.payingCars();
                break;

            }
            case 2:{
                t1.noPayingCars();
                break;
            }
            case 3:{
                t1.printOnConsole();
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