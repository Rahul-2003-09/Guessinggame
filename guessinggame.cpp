#include<iostream>
#include<cmath>
#include<time.h>
using namespace std;
class guessing{
  public:
  static int computerGuess(int lo,int hi,int randam,int count){
            if(hi>=lo){
                    srand(time(0));
                int guess=(lo+hi)/2+rand()%5;
                  if(guess==randam){
                  return count;
               }
                  else if(guess>randam){
                      count++;
                       return computerGuess(lo,guess-1,randam,count);

               }

                  else{
                        return computerGuess(guess+1,hi,randam,count) ;}
      }}};

int main(){
    int guess=-1;

    int count=0;
    srand(time(0));
    int randam=(rand()%100) +1;
    cout<<"Enter a Number between 1 and 100:";

    while(guess!=randam){
      cin>>guess;
      count++;
    if(guess<randam){
        cout<<"Higher";

    }else if(guess>randam){
            cout<<"Lower";}
     else {
        cout<<"It's Correct!";
     }
     cout<<endl;


    }
     int count1=guessing::computerGuess(0,100,randam,0);
     cout<<"It took  "<<count<<"   number of guesses"<<endl;
     cout<<"It took  "<<count1<<"    number  of guess"<<endl;
     if(count<count1){
        cout<<"won"<<endl;
     }else{
        cout<<"Lost"<<endl;}
     return 0;
}

