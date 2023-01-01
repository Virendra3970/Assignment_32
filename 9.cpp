//Assignment_32

//Topic: Over-riding, Overloading, and Constructors in Inheritance

//Author: Virendra Kumar

//Date: 30-Dec-2022

//Question: 

/*Write a C++ program to calculate the area of triangle, rectangle and circle using
constructor overloading. The program should be menu driven.*/

#include<bits/stdc++.h>	
#include<stdlib.h>	//this header contains all required headers of C++
#define PI 3.14
using namespace std;
class Shape		//abstract class, it has a pure virtual function
{
   protected:
    double x,y;
   public: 
     void setData(int x, int y=0)	//Here, one argument is default for circle
     {
       this->x=x;
       this->y=y;
     }
     virtual double area()=0;	//pure virtual function
};

class Rectangle: public Shape
{
  public:
   double area()		//re-definition otherwise it will also become Abstract class
   {
     return x*y;
   }
};

class Triangle: public Shape
{
  public: 
    double area()
    {
      return (x*y)/2;
    }
};

class Circle: public Shape
{
  public: 
   double area()
   {
     return PI*x*x;
   }
};

int main()
{
  int choice;
  while(1)
  {
    cout<<"1. Area of triangle"<<endl;
    cout<<"2. Area of rectangle"<<endl;
    cout<<"3. Area of circle"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    system("clear");
    switch(choice)
    {
      case 1:
      	    {
    	      Triangle t;
    	       double a, b;
    	      cout<<"\nEnter base and height of triangle: ";  	    
    	      cin>>a>>b;
    	      t.setData(a,b);
    	      cout<<"Area of Triangle: "<<t.area()<<" unit square"<<endl;
    	      break;
      	    }
     case 2:
    	    {
    	      Rectangle t;
    	       double a, b;
    	      cout<<"\nEnter length and bidth of rectangle: ";  	    
    	      cin>>a>>b;
    	      t.setData(a,b);
    	      cout<<"Area of Rectangle: "<<t.area()<<" unit square"<<endl;
    	      break;
      	    }
      case 3:
    	    {
	      Circle t;
    	      double a;
    	      cout<<"\nEnter radius of circle: ";  	    
    	      cin>>a;
    	      t.setData(a);
    	      cout<<"Area of circle: "<<t.area()<<" unit square"<<endl;
    	      break;
      	    }
      case 4:
           exit(0);
      default:
      	   cout<<"Please, Enter a valid choice.\nTry Again"<<endl;
      	   exit(0);
    }
    cout<<endl;
   }
   
  return 0;
}
