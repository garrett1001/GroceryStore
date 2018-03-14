//Author: Garrett Welton
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        vector<string> list;
        char input;
        int i = 0;
        string item;

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
                        cout<<"What is the item?"<<endl;
                        cin>>item;

                        list.push_back(item);
                }

                else if(input=='Q' || input=='q')
                {
                        int size = list.size();

                        if(size<1)
                        {
                                cout<<"No items to buy!"<<endl;
                                i++;
                        }
                        else
                        {
                                cout<<"==ITEMS TO BUY=="<<endl;
                                for (int x=0; x < size; x++)
                                {
                                        cout<<x+1<<" "<<list[x]<<endl;
                                }
                                i++;
                        }
                }

                else
                {
                        cout<<"Invalid selection"<<endl;
                }
        }


        return 0;
}
