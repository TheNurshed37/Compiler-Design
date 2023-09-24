#include<iostream>
using namespace std;

int main()
{
    string Array[5];
    cout<<"Expression: ";
    for(int i=0; i<5; i++)
    {
        cin>>Array[i];
    }

    int x=1;
    for(int i=0; i<5; i++)
    {
        if(Array[i]=="+")
        {
            cout<<"Operator no "<<x<<" is: "<<Array[i]<<endl;
            x++;
        }
        else if(Array[i]=="-")
        {
            cout<<"Operator no "<<x<<" is: "<<Array[i]<<endl;
            x++;
        }
        else if(Array[i]=="*")
        {
            cout<<"Operator no "<<x<<" is: "<<Array[i]<<endl;
            x++;
        }
        else if(Array[i]=="/")
        {
            cout<<"Operator no "<<x<<" is: "<<Array[i]<<endl;
            x++;
        }
        else if(Array[i]=="%")
        {
            cout<<"Operator no "<<x<<" is: "<<Array[i]<<endl;
            x++;
        }
        else if(Array[i]=="=")
        {
            cout<<"Operator no "<<x<<" is: "<<Array[i]<<endl;
            x++;
        }
    }
    return 0;
}
