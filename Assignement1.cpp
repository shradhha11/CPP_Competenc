#include<iostream>
using namespace std;

class Car
{
    public:
    int releaseYear;
    char customer[100];
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
    cout<<"\nCurrent Speed of Car:"<<speed;
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
    cout<<"\nCurrent Speed of Car:"<<c1.speed;
    for(i=0;i<5;i++)
    {
        c1.brake();
    }
    cout<<"\nAfter Deaccelerate";
    cout<<"\nCurrent Speed of Car:"<<c1.speed;
    return 0;
}


/*
OUTPUT:
Enter Release Year: 2012
Enter Customer Name of Car: HONDA
Enter Speed of Car: 50
Release Year of Car:2012
Customer name of Car:HONDA
Current Speed of Car:50
After Accelerate
Current Speed of Car:100
After Deaccelerate
Current Speed of Car:50
*/
