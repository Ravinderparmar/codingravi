#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
        sum += marks[i];
    }

    float percentage = (float)sum / 5;
    cout << "Total marks obtained: " << sum << endl;
    cout << "Percentage marks obtained: " << percentage << "%" << endl ;
    if(percentage>=90)
    {
        cout<<"A Grade";
    }
    else if(percentage<90&&percentage>=80)
    {
        cout<<"B Grade";
    }
    else if(percentage<80&&percentage>=60)
    {
        cout<<"C Grade";
    }
    else
    {
        cout<<"D Grade";
    }
}
