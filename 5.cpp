//Assignment_32

//Topic: Function Overloading, Overriding and Constructor in Inheritance

//Author: Virendra Kumar

//Date: 30-Dec-2022

//Question:
/*Define a class A having multiple constructors. Define another class B derived from
class A. Create derived class constructors and show use of constructor in this single
inheritance.*/

#include<bits/stdc++.h>
using namespace std;
class A
{
  protected:
    int x,y;
  public:
    A()
    {
      cout<<"DC called for class A"<<endl;
      cout<<"Enter two numbers: ";
      cin>>x>>y;
    }
    A(int x, int y)
    {
      cout<<"PC1 called for class A"<<endl;
      this->x=x;
      this->y=y;
      cout<<"Sum is "<<x+y<<endl;
    }
    A(float x, float y)
    {
      cout<<"PC2 called for class A"<<endl;
      this->x=x;
      this->y=y;
      cout<<"Sum is "<<x+y<<endl;
    }
    A(int x)
    {
      cout<<"PC3 called for class A"<<endl;
      this->x=x;
      cout<<"Square is "<<x*x<<endl; 
    }
};

class B: public A
{
  public:
   B(): A()
   {
     cout<<"DC called for class B"<<endl;
     cout<<"x= "<<x<<" y= "<<y<<endl;
   }
   B(int a, int b): A(a,b)
   {
     cout<<"PC1 called for class B"<<endl;
     cout<<"Difference is "<<a-b<<endl;
   }
   B(float a, float b): A(a,b)
   {
     cout<<"PC2 called for class B"<<endl;
     cout<<"Difference is "<<a-b<<endl;
   }
   
   B(int a): A(5)
   {
     cout<<"PC3 called for class B"<<endl;
     cout<<"Cube: "<<x*x*x<<endl;
   }
   
     
};

int main()
{

 B b1, b2(1), b3(40,25), b4(15,10.5);
 
 return 0;
}
