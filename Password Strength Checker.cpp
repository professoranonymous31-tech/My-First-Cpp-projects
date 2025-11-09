#include<iostream>
#include<cstdio>
#include<conio.h>
#include<string>
#include<unordered_set>
using namespace std;
int main()
{
// This Program evaluates the strength of a password and generates a stength score 
// based on a combination of parameters such as checking for:
// 1)uppercase,lowercase,digits and special characters
// 2)Length of the password
// 3)combination of uppercase,lowercase,digits and special characters
// 4)Penalising for use of repeated characters

std::string pass;
std::cout<<"Enter  your password: ";
std::getline(std::cin,pass);
int strength=0;
bool hasUpper=false, hasLower=false, hasDigit=false, hasSpecial=false;
if(pass.length()<8)
{
   cout<<"Password must be atleast 8 characters long."<<endl;
   cout<<" "<<endl; // Just for spacing
}
else{}
for(char check : pass)
{
      if(isupper(check))
      {hasUpper=true;}
      else if(islower(check))
      {hasLower=true;}
      else if(isdigit(check))
      {hasDigit=true;}
      else
      {hasSpecial=true;}
}
// 1️⃣ Length-based scoring:

    if (pass.length() >= 8)  strength++;
    if (pass.length() >= 12) strength++;
    if (pass.length() >= 16) strength++;

// 2️⃣ Character variety scoring:

    if(hasUpper)  strength++;
    if(hasLower)  strength++;
    if(hasDigit)  strength++;  
    if(hasSpecial)strength++;

// 3️⃣ Combination factor scoring:

    int variety= hasUpper + hasLower + hasDigit + hasSpecial;
    if(variety >=3) strength++;
    if(variety ==4) strength++;
    cout<<endl; // Just for spacing   

// 4️⃣ Penalty for repeated characters:

      unordered_set<char> unique_chars(pass.begin() , pass.end());;
      if (unique_chars.size() < pass.length())
         { strength--;}

// Final Strenth evaluation:
           
      switch(strength){
      case 9:
      case 8:
      cout<<"Password Strength: VERY STRONG"<<endl;
      cout<<" "<<endl; // Just for spacing
      cout<<"Password Accepted."<<endl;
      break;
      case 7:
      case 6:
      cout<<"Password Strength: STRONG"<<endl;
      cout<<" "<<endl; // Just for spacing
      cout<<"Tip: Add more variety to make it very strong."<<endl;
      break;
      case 5:
      cout<<"Password Strength: MODERATE"<<endl;
      cout<<" "<<endl; // Just for spacing
      cout<<"Tip: Try mixing uppercase, digits, and special characters."<<endl;
      break;
      case 4:
      case 3:
      case 2:
      cout<<"Password Strength: WEAK"<<endl;
      cout<<" "<<endl; // Just for spacing
      cout<<"Tip: Think harder this won't protect anything!"<<endl;
      break;
      default:
      cout<<"NIGGA ARE YOU FR?? SYBAU AND USE A REAL PASSWORD......";
      }
    
    cout<<" "<<endl; // Just for spacing
    std::system("pause");
    return 0;
}