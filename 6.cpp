//Assignment_32

//Topic: Function Overloading, Overriding and Constructor in Inheritance

//Author: Virendra Kumar

//Date: 30- Dec-2022

//Question: 
/*C++ Program to illustrate the use of Constructors in multilevel inheritance of your
choice.*/

#include<bits/stdc++.h>		//this header has contains all required headers using in C++
using namespace std;
class Square			//base class
{
//protected members which is available for both(child class and objects) but accessable only for  					 child class and inside the class 
  protected:
    int a, c;
  public: 
    cout<<"\nEnter a number: ";
    cin>>a;
    Square()
    {
      cout<<"\nSquare() called"<<endl;
      c=a*a;
      cout<<"Square is "<<c<<endl;
    }
};

//Cube class derived from Square
class Cube: public Square
{
  public: 
    Cube(): Square()		//Square() construtor is initialized by Initializer list
    {
      cout<<"\nCube() called"<<endl;
      c=a*a*a;
      cout<<"Cube is "<<c<<endl;
    }    
};

//class Square_Cube derived from Cube class
class Square_Cube: public Cube
{
  private: 
    int d;
  public:
    Square_Cube(): Cube() 	//Square_Cube() construtor is initialized by Initializer list
    {
      cout<<"\nSquare_Cube() called"<<endl;
      c=a*a ,d=a*a*a;
      cout<<"Square and Cube are: "<<c<<" "<<d<<endl;
      
    }
};

//main() function
int main()
{
 Square_Cube obj;
 return 0;
}
