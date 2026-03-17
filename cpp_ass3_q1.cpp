#include<iostream>
using namespace std;
class Cylinder{
    private:
    double height;
    double radius;
    static float pi;

    public:
    Cylinder(void) : height(0), radius(0)
    { }
    Cylinder(double height, double radius): height(height), radius(radius)
    { }
    int getRadius(void){
        return this->radius;
    }
    int setRadius(double radius){
        this->radius = radius;
    }
    int getHeight(void){
        return this->height;
    }
    int setHeight(double height){
        this->height = height;
    }
    void calculateVolume(){
        cout<<"Volume of cylinder is: "<<pi*radius*radius*height<<endl;

    }
};
float Cylinder::pi = 3.14;
int main(){
    Cylinder cy;
    double rad;
    double hgt;
    cout<<"Enter values Below: "<<endl;
    cout<<"Enter Radius: ";
    cin>>rad;
    cout<<"Enter Height: ";
    cin>>hgt;
    cy.setRadius(rad);
    cy.setHeight(hgt);
    cy.calculateVolume();
    return 0;
}