#include <iostream>
#include <conio.h>
#include <limits>

using namespace std;
double validateWeight()
{ double weight;
  while (true)
  {
      cout<<"Weight :";cin>>weight;

      if(cin.fail())
      {
        cout<<"Invalid input! Please enter a number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max() ,'\n');
      }
      else if(weight <=0 or weight>20 )
          {
           cout<<"Please Enter Weight within the range 0-20 kg"<<endl;
          }
      else
          { 
            cin.ignore(numeric_limits<streamsize>::max() ,'\n');
            return weight;
          }
  }
}  

double validateMiles()
{ 
  double miles;
  while(true)
  {
    cout<<"Miles :";cin>>miles;
    if(cin.fail())
    { 
        cout<<"Invalid input! Please enter a number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max() ,'\n');
    }
    else if(miles<10 or miles>3000)
    {
      cout<<"Please Enter Miles within the range 10-3000 miles"<<endl;
    }
    else
    {    cin.ignore(numeric_limits<streamsize>::max() ,'\n');
         return miles;
    }
  }

}
int main()
{  
    char again='y';
    while(again=='y' or again=='Y')
  {
    double weight,miles;
    cout<<"\nWelcome to The Fast Freight Shipping Company \nPlease Enter the following details of your Package:\n\n1)Weight in Kilograms (Max limit 20 kg) \n2)Distance in Miles (Max limit 3000 miles)"<<endl;
    cout<<""<< endl; // Just for spacing
    weight=validateWeight();
    miles=validateMiles();
    double price_1=0.0022;
    double price_2=0.0044;
    double price_3=0.0074;
    double price_4=0.0096;
    if(weight<=2)
     {
        cout<<"\nThe Charges for Shipping your package will be: "<<miles*price_1<<"$"<<endl;
     }
    else if(weight>2 and weight<=6)
     {
       cout<<"\nThe Charges for Shipping your package will be: "<<miles*price_2<<"$"<<endl;
     }
    else if(weight>6 and weight<=10)
     {
       cout<<"\nThe Charges for Shipping your package will be: "<<miles*price_3<<"$"<<endl;
     }
     else if(weight>10 and weight<=20)
     {
       cout<<"\nThe Charges for Shipping your package will be: "<<miles*price_4<<"$"<<endl;
     }

     cout<<"\n\nDo you have another Package You want to ship? If yes, Press Y or y to continue....."<<endl;
     cin>>again;
     if(again == 'y' or again =='Y')
     {
     }
     else
     {
      cout<<"Thank you for doing Buisness with us \n Goodbye....";
     }
  }
    cout<<""<< endl; // Just for spacing
    system("pause");
    return 0;
}