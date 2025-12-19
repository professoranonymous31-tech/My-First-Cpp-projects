#include <iostream>
using namespace std;
using std::cout;
using std::cin;
int main()
{
    int t1 , t2, nextTerm, noOfTerms;
    cout<<"Enter two consecutive positive integers: "<<endl;
    cin>>t1;cout<<"and"<<endl;
    cin>>t2;
    cout<<"Enter number of terms: ";
    cin>>noOfTerms;
    cout<<"Fibonacci Sequence is: "<<endl;

    cout<<t1<<" ";
    cout<<t2<<" ";
    
    for(int i=0;i<=noOfTerms;i++)
    {
            nextTerm=t1+t2;
            cout<<nextTerm<<" ";
            t1=t2;
            t2=nextTerm;
    }
    
 
    cout << " " << endl; // Just for spacing
    system("pause");
    return 0;
}