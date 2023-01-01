//Assignment_32

//Topic: Overloading, overriding and constructors in Inheritance

//Authior: Virendra Kumar

//Date: 30-Dec-2022

//Question:
/*Write a C++ program to find the factorial of a number using copy constructor*/

#include<bits/stdc++.h>		//this header contains mostly all useful headers
using namespace std;

//Factorial class
class Factorial
{
  private:			//private members which aren't accessable for outside world
    int x;
    long long int calFact()	//calFact() for calculate the Factorial of a number
    { 
      //create logic
      long long int fact=1;
      if(x==1 || x==0)		//if x==1 or x==0, returns 1
         return 1;		//Since 1!=1 and 0!=1
      else
      {
        for(; x!=1; x--)	
        {
          fact=fact*x;		//main logic
        }
        return fact;
      }
    }
  public:
    Factorial()			//Default Constructor
    {
      //cout<<"Factorial: "<<calFact()<<endl;
    }
    Factorial(int x)		//Parameterized Constructor
    {
      this->x=x;		//this will assign in private member
      cout<<"\nFactorial: "<<this->calFact()<<endl;	//this will show the factorial of given number
    }
};

int main()
{
  int num;			
  cout<<"\nEnter a number for factorial: ";
  cin>>num;
  try				//Exception Handling for number 
  {				//Since, factorial is defined only for Positive number.
    if(num<0)
      throw 101;
  }
  catch(int a)
  {
    cout<<"\nInvalid input, factorial is not defined for non-positive number "<<endl;
    exit(0);
  }
  Factorial obj(num);
  return 0;
}
