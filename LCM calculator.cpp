#include <iostream>
#include <numeric>
using namespace std;
int main()
{ 
    int num1, num2;

    cout << "Enter two numbers: "<<endl;
    cin >> num1 >> num2;

    int result = lcm(num1,num2);

    cout << "LCM of " << num1 << " and " << num2 << " is: " << result << endl;

    cout << " " << endl; // Just for spacing
    system("pause");
    return 0;
}