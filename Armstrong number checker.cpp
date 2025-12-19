#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout<<"Enter a positive integer: ";
    int n;
    cin>>n;
    int digit;
    int sum=0;
    int original=n;
    int numOfDigits=0;
    while (n>0)
    {
        n/=10;
       numOfDigits++;
    }
    n=original;
    while(n!=0)
    {
       int digit=n%10;
       sum+=pow(digit,numOfDigits);
       n/=10;
    }
    if(sum==original)
    {
        cout<<"The number "<<original<<" is an Armstrong number."<<endl;
    }
    else
    {
        cout<<"The number "<<original<<" is not an Armstrong number."<<endl;
    }
    cout << " " << endl; // Just for spacing
    system("pause");
    return 0;
}