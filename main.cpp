//Author: Garrett Welton
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input = 0;
  int i = 0;

while(i<1)
{
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;

  if(input=='A' || input=='a')
  {
    if(numItems<5)
    {
     cout<<"What is the item?"<<endl;
     cin>>list[numItems];
     numItems++;
    }

    else
    {
     cout<<"You'll need a bigger list!"<<endl;
    }
  }

  else if(input=='Q' || input=='q')
  {
  i++;
  }

  else
  {
  cout<<"Invalid selection"<<endl;
  }
}


  return 0;
}
