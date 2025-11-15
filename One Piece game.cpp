#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <iomanip>
#include <conio.h>
using namespace std;
using std::cout;
using std::endl;
using std::cin;
using std::string;

enum gears
{
  base =1,
  second,
  third,
  fourth,
  fifth,
};

int main()
{   char playagain='y';
      while(playagain=='y' || playagain=='Y')
  {
    
      srand(time(0));
      string opponents []={"Crocodile","Rob Lucci","Hody Jones","Bullet","Blackbeard","Kizaru",
                           "Aokiji","Akainu","Big Mom","Kaidou","Doflamingo","Katakuri"};
  
      int WinPercent[5][12]=
     {
       {20,30,100,20,10,10,10,8,10,5,50,30},          // base form
       {22,35,120,22,10,10,10,10,10,10,60,33},        // Gear Secondo
       {40,50,200,35,20,15,20,20,20,15,75,50},        // Gear third
       {95,100,500,100,40,40,50,50,50,40,150,100},    // Gear Fourth
       {200,200,1000,150,98,95,100,92,97,90,500,300}, // Gear Fifth
     };  
  
      int numof_opp=(sizeof(opponents)/ sizeof(opponents[0]));
      int choosenOpp= rand() % numof_opp;
      std::cout<<"\nYour Opponent is...."<<endl;
      std::cout << " " << endl; // Just for spacing
      std::cout<<setw(10)<<opponents[choosenOpp]<<endl;
      std::cout << " " << endl; // Just for spacing
      std::cout<<"\nWhich Gear will you use to fight???"<<endl;
      std::cout << " " << endl; // Just for spacing
      int gear_in;
      cin>>gear_in;
  
      gears choosen= static_cast<gears>(gear_in);
      
      switch(choosen)
      { 
        case base:
        std::cout<<"\n So nothing to sweat about eh?.... Just a Pure Hakiman "<<endl;
        break;

        case second:
        std::cout << "\n Gear... Secondoo!! Steam bursts out SPEED BOOST!!"<<endl;
        break;

        case third:
        std::cout << "\n Gear Third!! GIANT FIST INCOMING!!"<<endl;
        break;

        case fourth:

        std::cout << "\n Gear Fourth!!!....Choose your transformation:"<<endl;
        std::cout<<"\n1) Bound-man"<<endl;
        std::cout<<"\n2) Snake-man"<<endl;
        std::cout<<"\n3) Tank-man"<<endl;
        std::cout<<"\n Press 1 , 2 or 3 for your desired form"<<endl;

        int form;
        cin>>form;

          if(form==1)
          {
            cout<<"\n The Phenomenal \"Bound-man\". A combination of Great defence and heavy hitting power"<<endl;
          }
          else if(form==2)
          {
            cout<<"\n The Fist of Divine Speed...\"Snakeman\""<<endl;
          }
          else if(form==3)
          {
            cout<<"\n The Power of a Full Stomach - Gear 4 Tankman!"<<endl;
          }
          else{cout<<"Please enter a valid form";}

        break;

        case fifth:
        std::cout << "\n Gear Fifth!!! The Awakening of the Mythical Zoan Model \"Nika\"\n"<<endl;
        break;

        default:
        std::cout << "Invalid gear. Luffy gets confused and takes a nap.\n";
      }
  
      int gearIndex=static_cast<int>(choosen)-1;  //Converting choosen of data type gears which starts from 1 to an int which starts from 0
      int OppIndex=choosenOpp;   //Just to make code readable
      int win= WinPercent[gearIndex][OppIndex];  //Fetching win percent fot a specific gear and a specific opponents
      
      cout<<"\n Your Chances of winning are: "<<win<<"%"<<endl;
      cout<<"\n Press Enter to find out the outcome of the Battle"<<endl;
      getch();
       int chance = rand() % 110 + 1; // Generates chances of Opponents winning from 1-110
          if (chance <= win) 
       {
           cout <<"\n Luffy WINS the battle!"<<endl;
       } else {
           cout <<"\n Luffy LOSES! Better luck next time."<<endl;
       }
      
         cout<<"\n Would you like to Play Again..?"<<endl;
         cout<<"\n Enter Y or N"<<endl;
         cin>>playagain;
     
       if(playagain=='y' or playagain=='Y')
       {
         cout<<"\n Starting a New Game.............."<<endl;
         cout<<"\nPress any key when you're ready to play"<<endl;
         getch();
       }
       else if(playagain=='n' or playagain=='N')
       {
        cout<<"\n Thank You for playing....Goodbye"<<endl;
       }
       else
        {
       while ((playagain!='y' or playagain!='Y') or (playagain!='n' or playagain!='N'))
       {
     
         cout<<"\n Please Enter Yes or No"<<endl;
         cout<<"\n Would you like to Play Again..?"<<endl;
         cin>>playagain;
     
        if(playagain=='y' or playagain=='Y')
        {
         cout<<"\n Starting a New Game.............."<<endl;
         cout<<"\nPress any key when you're ready to play"<<endl;
         getch();
         break;
        }
         else if(playagain=='n' or playagain=='N')
        {
        cout<<"\n Thank You for playing....Goodbye"<<endl;
        break;
        }
  
    } 
  
   }
  
  }
      cout << " " << endl; // Just for spacing
      system("pause");
      return 0;
}