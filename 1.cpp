/*Assignment_31
*Topic: Overriding, overloading, constructor in inheritance
*Question: 
* Create a class FLOAT that contains one float data member. Overload all the four
* arithmetic operators so that they can operate on the objects of FLOAT.
* Author: Virendra Kumar
* Date: 30 Dec 2022
*/
#include<bits/stdc++.h>
using namespace std;

//float class
class Float
{
  private:
    float var;
  public: 
    //Default Constructor
    Float(){}
    
    //Paramterized Constructor
    Float(float var)    
    {
      this->var=var;
    }
    
    //
    //ovarloading of '+' operator
    Float operator+(Float ar)
    {
      Float temp;
      temp.var=this->var+ar.var;
      return temp;
    }
    
    //overloading of '-' operator
    Float operator-(Float ar)
    {
      Float temp;
      temp.var= this->var-ar.var;
      return temp;
    }
    
    //ovarloading of '*' operator
    Float operator*(Float ar)
    {
      Float temp;
      temp.var=this->var*ar.var;
      return temp;
    }
    
    //ovarloading of '/' operator
    Float operator/(Float ar)
    {
      Float temp;
      temp.var=this->var/ar.var;
      return temp;
    }
    
    //overloading of '>>' operator as a friend since we have to use istream class object
    friend istream& operator>>(istream&, Float&);
    
    //overloading of '<<' operator
    friend ostream& operator<<(ostream&, Float&);
};

//Definition of '>>' operator
istream& operator>>(istream& is, Float& f)
{
  is>>f.var;
  return is;
}

//Definition of '<<' operaotr
ostream& operator<<(ostream& os, Float& f)
{
  os<<f.var;
  return os;
}
//main function
int main()
{
  Float f1, f2,f3;
  
  cout<<"\nEnter first value: ";
  cin>>f1;
  cout<<"\nEnter second value: ";
  cin>>f2;
  //addition
  f3=f1+f2;
  cout<<"\nAddition: "<<f3<<endl;
  //substraction
  f3=f1-f2;
  cout<<"\nSubstraction: "<<f3<<endl;
  //multiply
  f3=f1*f2;
  cout<<"\nMultiplication: "<<f3<<endl;
  //divide
  f3=f1/f2;
  cout<<"\nQucient: "<<f3<<endl;
  return 0;
}
