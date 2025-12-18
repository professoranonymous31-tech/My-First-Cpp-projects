#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter a positive integer: ";
    int n;
    cin>>n;
    int orignal=n;
    int reverse=0;
    while (n>0)
    {
        int digit=n%10;
        reverse=reverse*10+digit;
        n/=10;
    }
    if(orignal==reverse)
    {
        cout<<"The number "<<orignal<<" is a palindrome."<<endl;
    }
    else
    {
        cout<<"The number "<<orignal<<" is not a palindrome."<<endl;
    }





 /* cout<<"Enter a positive integer: ";
   int n;
   cin>>n;
   int count=0;
 while (n>0)
 {
    n/=10;
    count++;
 }
 cout<<"Number of digits: "<<count<<endl;*/

 cout << " " << endl; // Just for spacing
    system("pause");
    return 0;
}