#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
using namespace std;
int main()
{
    cout<<"                     ======================================"<<endl;
    cout<<"                     ******WELCOME TO THE CASINO GAME******"<<endl;
    cout<<"                     ======================================"<<endl;
    cout<<""<<endl;
    cout<<"              ====================================================="<<endl;
    cout<<"              *****************************************************"<<endl;
    cout<<"INSTRUCTIONS: YOU HAVE TO GUESS A NUMBER BETWEEN 1 TO 100."<<endl;
    cout<<"              IF YOU GUESS IT IN 6 OR LESS THAN 6 ATTEMPTS, YOU WIN."<<endl;
    cout<<"              IF YOU WIN, YOU WILL EARN DOUBLE THE BIDDED AMOUNT "<<endl;
    cout<<"              *****************************************************"<<endl;
    cout<<"              ====================================================="<<endl;
    cout<<""<<endl;
    
    int amount;
    int won;
    int number;
    int guess;
    int numguess=1;
    string name;
    srand(time(0));
    number=rand()%100 + 1;
    cout<<"Enter you first name: ";
    cin>>name;
    cout<<""<<endl;
    cout<<"Enter bid amount in $: ";
    cin>>amount;
    cout<<""<<endl;
        
    do
    {
        cout<<"Guess a number between 1 to 100: ";
        cin>>guess;
        
        if(guess>number)
        {
            cout<<"Guess a lower number please!"<<endl;
            cout<<""<<endl;
        }
        else if(guess<number)
        {
            cout<<"Guess a higher number please!"<<endl;
            cout<<""<<endl;
        }
        else
        {
            cout<<""<<endl;
            cout<<"==================================================="<<endl;
            cout<<"*****************CORRECT GUESS*********************"<<endl;
            cout<<"***********YOU GUESSED IT IN "<<numguess<<" ATTEMPTS************"<<endl;
            cout<<"==================================================="<<endl;
            cout<<""<<endl;
        }
        numguess++;
    }
    while(guess!=number);
    
    if(numguess<=7)
    {
        cout<<"========================================="<<endl;
        cout<<"**********CONGRATULATIONS "<<name<<"**********"<<endl;
        cout<<"****************YOU WON******************"<<endl;
        cout<<"========================================="<<endl;
        cout<<""<<endl;
        won=amount*2;
        cout<<"======================"<<endl;
        cout<<"Money earned in $: "<<won<<endl;
        cout<<"======================"<<endl;
        cout<<""<<endl;
    }
    else
    {
        cout<<"================================="<<endl;
        cout<<"########## SORRY "<<name<<" ##########"<<endl;
        cout<<"########### YOU LOST ############"<<endl;
        cout<<"##### BETTER LUCK NEXT TIME #####"<<endl;
        cout<<"================================="<<endl;
        cout<<""<<endl;
        cout<<"===================="<<endl;
        cout<<"Money earned in $: 0"<<endl;
        cout<<"===================="<<endl;
        cout<<""<<endl;
    }
    cout<<"============================================="<<endl;
    cout<<"-x-x-x-x-THANKS FOR PLAYING THE GAME-x-x-x-x-"<<endl;
    cout<<"============================================="<<endl;
    cout<<""<<endl;

    return 0;
}
