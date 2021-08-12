#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 
 
 int main()
 {auto num=0;
 auto guess=0;
    srand(time(0));
     num=rand()%(100)+1;// Secret number 
     
 for(int i=0;i<5;i++)
 {
    
   cin>>guess;
    if (i==4) 
  {
     cout<<"You lose";
     break;
  }
   else if (guess<num)
   {
      cout<<"Guess higher";
   }
   else if (guess>num)
   {
      cout<<"Guess lower";
   }
 else if (guess==num)
 {
    cout<<"You win";
 }
  
  }
     
 
 
return 0;
 }