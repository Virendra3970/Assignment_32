/*Assignment_32
*Topic: Function Overloading, Overriding and Constructor in Inheriotance
*Question: 
* Define a class Rectangle and overload area function for different types of data type.
* Author: Virendra Kumar
* Date: 30-Dec- 2022
*/

#include<bits/stdc++.h>
using namespace std;
template<class T3=float, class T2=float, class T1=float>
//class Rectangle
class Rectangle
{
  private:
   T1 x; T2 y;
  public:
   
   T1 Area(T2 i, T2 j )
   {
     return i*j;
   }
};


//main() function
int main()
{
  Rectangle<double,float,double>r1;
  cout<<"Area is: "<<r1.Area(10.5,20.3)<<" square unit"<<endl;
  //r1.setData()
  return 0;
}
