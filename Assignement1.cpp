#include<iostream>
using namespace std;

class Car
{
    public:
    int releaseYear;
    string customer;
    int speed;

int getValues()
    {
        cout<<"\nEnter Release Year: ";
        cin>>releaseYear;
    
        cout<<"\nEnter Customer Name of Car: ";
        cin>>customer;
    
        cout<<"\nEnter Speed of Car: ";
        cin>>speed;
        return 0;
    }
int display()
{
    cout<<"\nRelease Year of Car:"<<releaseYear;
    cout<<"\nCustomer name of Car:"<<customer;
    cout<<"\nCurrent Speed of Car:"<<speed<<" km/h";
    return 0;
}
  int accelerate()
       {
          speed=speed+10;
          return 0;
       }
  int brake()
       {
          speed=speed-10;
          return 0;
       }
};

int main()
{
    Car c1;
    int i;
    c1.getValues();
    c1.display();
    for(i=0;i<5;i++)
    {
        c1.accelerate();
    }
    cout<<"\nAfter Accelerate";
    cout<<"\nCurrent Speed of Car:"<<c1.speed<<" km/h";
    for(i=0;i<5;i++)
    {
        c1.brake();
    }
    cout<<"\nAfter Deaccelerate";
    cout<<"\nCurrent Speed of Car:"<<c1.speed<<" km/h";
    return 0;
}


/*
OUTPUT:
Enter Release Year: 2023
Enter Customer Name of Car: honda
Enter Speed of Car: 60
Release Year of Car:2023
Customer name of Car:honda
Current Speed of Car:60 km/h
After Accelerate
Current Speed of Car:110 km/h
After Deaccelerate
Current Speed of Car:60 km/h
*/
