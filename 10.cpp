//Assignment_32

//Topic: Function Overloading, Overriding and Constructor in Inheritance

//Author: Virendra Kumar

//Date: 30-Dec-2022

//Question:
/*Create a C++ class for player objects with the following attributes: player no., name,
number of matches and number of goals done in each match. The number of
matches varies for each player. Write a parameterized constructor which initializes
player no., name, number of matches and creates an array for number of goals and
number of matches dynamically.*/

#include<bits/stdc++.h>
using namespace std;
class Player		//player class
{
  private:		//private members
    int player_No;
    string name;
    int number_Of_Matches;
    int *number_Of_Goals;
  public:		//public members
    Player()		//default constructor
    {
      
    }
    Player(int player_No, string name, int number_Of_Matches)
    {
      this->player_No=player_No;
     // strcpy(name,n);
     this->name=name;
      this->number_Of_Matches=number_Of_Matches;
      number_Of_Goals=new int[number_Of_Matches]; //run-time creating array to store no of goals
      for(int i=0; i<number_Of_Matches; i++)
      {
        cout<<"\nEnter no of goals in "<<i+1<<" match: ";
        cin>>number_Of_Goals[i];
      }
      
    }
    void display()
    { 
      cout<<"----------------------------------"<<endl;
      cout<<"Player's Details: "<<endl;
      cout<<"Player No.: "<<player_No<<endl;
      cout<<"Player Name: "<<name;
      cout<<"No of Matches: "<<number_Of_Matches<<endl;
      for(int i=0; i<number_Of_Matches; i++)
      {
        cout<<"No of goals in "<<i+1<<" match: "<<(number_Of_Goals[i])<<endl;
      }
    }
};

//main() function
int main()
{
  int i,j;
  string N;
  cout<<"\nEnter the player no: ";
  cin>>i;
  cout<<"\nEnter the player name: ";
  cin.ignore();
  cin>>N;
  cout<<"\nEnter the no of played matches: ";
  cin>>j;
  Player p(i,N,j);
  p.display();  
  return 0;
}
