#include<iostream>
using namespace std;

int main()
{
    float radius,area,circumference;
    cout<< "input radius ";
    cin>> radius;
    cout<<endl;
    
    circumference= 2*3.14*radius;
    area= 3.14*radius*radius;

    cout<< "circumference of circle is :" << circumference <<endl;

    cout<< "area of circle is : " << area <<endl;

    return 0;
}
