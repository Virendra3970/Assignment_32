//Assignment _32

//Topic: Function Overloading, Overriding and Constructor in Inheritance

//Author: Virendra Kumar

//Date: 30-Dec-2022

//Question:
/*C++ Program to illustrate the use of Constructors in single inheritance of your choice.*/

#include<bits/stdc++.h>
using namespace std;

class Base		//base class
{
  public: 
    Base()		//base class constructor
    {
      int a=10, b=5, c;
      c=a+b;
      cout<<"\nBase Class Constructor called"<<endl;
      cout<<"\nSum is "<<c<<endl;
      
    }
};

class Derived: public Base		//Derieved class derived from Base class
{
  public: 
    //Here, we've to initilize the Base class constructor by Initializer List.
    //Since, Construcotrs cannot inherit from one class to others.
    Derived(): Base()			//Derived class Constructor
    {
      int a=10, b=5, c;
      c=a-b;
      cout<<"\nDerived Class Constructor called"<<endl;
      cout<<"\nDifference is "<<c<<endl;
    }
  
};

int main()				//main function
{
  //Derived class object
  Derived obj;
  return 0;
}
