#include<iostream>
using namespace std;
main()
{
    float a,b,c;
    cout<< "Enter three numbers a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;

    if(a>b&&a>c)
    {
        cout<<"a="<<a<<"is the greatest";
    }

    else if(b>a&&b>c)
    {
        cout<<"b="<<b<<"is the greatest";
    }
    
    else
    {
        cout<<"c="<<c<<"is the greatest";
    }
}
