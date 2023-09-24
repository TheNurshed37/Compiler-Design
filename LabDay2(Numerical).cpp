#include<iostream>
using namespace std;

int main()
{
    string x;
    cout<<"Input: ";
    cin>>x;
    cout<<endl;

    if(x>="A" && x<="Z")
    {
        cout<<"Not Numerical."<<endl;
    }
    else if(x>="a" && x<="z")
    {
        cout<<"Not Numerical."<<endl;
    }
    else
    {
        cout<<"Numerical."<<endl;

    }

    return 0;
}
