//Assignment_32

//Topic: Overloading, overriding and constructors in Inheritance

//Author: Virendra Kumar

//Date: 30-Dec-2022

//Question:
/*Define a base class Animals having member functin sound(). Define another derived class from Animals class named Dogs. You need to override the sound function of the base class in the derived class */

#include<bits/stdc++.h>
using namespace std;
class Animals
{
  public:
    void sound()
    {
      cout<<"Animals sound(mashup voice(*_*))"<<endl;
    }
};

class Dogs: public Animals
{
 public:
  void sound()		//sound() overriden
  {
    cout<<"Dogs sound (Bhao-Bhao)"<<endl;
  }
};

int main()
{
  Dogs d,obj;
  //this sound() is of Dogs class
  d.sound();
  //sound() of class Animals accessed by class Dogs object. 
  obj.Animals::sound();		
  return 0;
}
