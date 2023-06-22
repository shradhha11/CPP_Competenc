#include <iostream>
#include <string>

using namespace std;

//class name
class Car 
{
    public:
    int releaseYear;
    string customer;
    int speed;
    Car()
    {
        cout<<"Default Constructor is called"<<endl;
        releaseYear = 2014;
        customer = "MMC";
        speed = 0;
    }
    Car(int year, string cust) 
    {
        cout<< "\nParameterized Constructor is called" << endl;
        releaseYear = year;
        customer = cust;
        speed = 0;
    }
  
  ~Car() //Destructor
  {
    cout<< "Destructor is called" << endl;
  }
  int display()
{
    cout<<"Release Year of Car:"<<releaseYear<<endl;
    cout<<"Customer name of Car:"<<customer<<endl;
    cout<<"Current Speed of Car:"<<speed<<" km/h"<<endl;
    return 0;
}
    void accelerate() {
        speed += 10;  
    }
  
    void brake() {
        speed -= 10;
    }
};

int main() 
{
  
    Car c1;
    c1.display();
    Car c2(2016,"Honda");
    c2.display();
    int i;
    for(i=0;i<5;i++)
    {
        c1.accelerate();
    }
    cout<<"After Accelerate"<<endl;
    cout<<"Current Speed of Car:"<<c1.speed<<" km/h"<<endl;
    for(i=0;i<5;i++)
    {
        c1.brake();
    }
    cout<<"After Deaccelerate"<<endl;
    cout<<"Current Speed of Car:"<<c1.speed<<" km/h"<<endl;
    return 0;
}

/*
OUTPUT:
Default Constructor is called
Release Year of Car:2014
Customer name of Car:MMC
Current Speed of Car:0 km/h

Parameterized Constructor is called
Release Year of Car:2016
Customer name of Car:Honda
Current Speed of Car:0 km/h
After Accelerate
Current Speed of Car:50 km/h
After Deaccelerate
Current Speed of Car:0 km/h
Destructor is called
Destructor is called
*/
