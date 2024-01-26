#include<iostream>
using namespace std;
#define e endl
class Vehicle{

private:
    string make , model;
    int year;
public:
    Vehicle()
    {
        cout<<"\t  Welcome : "<<e;
    }

    void inputData(){
        cout<<"Enter Company : "<<endl;
        cin>>make;
        cout<<"Enter model : "<<endl;
        cin>>model;
        cout<<"Enter year : "<<endl;
        cin>>year;
    }
    void displayData(){
        cout<<"make : "<<make << endl;
        cout<<"model : "<<model << endl;
        cout<<"year : "<<year << endl;
    }
};

class Car : public Vehicle{

private:
    int numDoors;
public:

    void  inputData(){
        Vehicle::inputData();  // Scope Operator for Funs with same name
        cout<<"Enter number Of Doors : "<<endl;
        cin>>numDoors;
    }

    void displayData(){
        Vehicle::displayData();
        cout<<"Doors : "<<numDoors << endl;
    }
};

class ToyotaCar : public Car{

private :
    string trimlevel;
public:

    void inputData()
    {
        Car::inputData();
        cout<<"Enter trim level : "<<endl;
        cin>>trimlevel;
    }
    void displayData(){
        Car::displayData();
        cout<<"trim level : "<<trimlevel << endl;
    }
    ~ToyotaCar(){
    cout<<"----------------------Thanks----------------------"<<e;
    }
};

int main()
{
    ToyotaCar myCar;
    cout<<"------------------Input Car Info-------------------"<<endl;
    myCar.inputData();
    cout<<"------------------Output Car Info------------------"<<endl;
    myCar.displayData();

}

