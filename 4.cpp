//Assignment_32

//Topic: Function Overloading, Overriding, Constructor in Inheritance

//Author: Virendra Kumar

//Date: 30-Dec-2022

//Question:
/*Define a class Addition that can add 2 or 3 numbers of different data types using
function overloading.*/

#include<bits/stdc++.h>
using namespace std;

//Addition class
class Addition
{
  private:
   
  public:
    /*int add(int a, int b)
    {
      return (a+b);
    }*/
    
    int add(int a, int b=0, int c=0)
    {
      return (a+b+c);
    }
    
    /*float add(float a, float b)
    {
      return (a+b);
    }*/
    
    float add(float a, float b=0, float c=0)
    {
      return (a+b+c);
    }
    /*float add(int a, int b, float c)
    {
      return(a+b+c);
    }
    float add(int a, float b, int c)
    {
      return (a+b+c);
    }
    float add(int )*/
  
};

int main()
{
  Addition a1,a2,a3,a4;
  cout<<"Sum is "<<a1.add(4,5,15)<<endl;
  return 0;
}
