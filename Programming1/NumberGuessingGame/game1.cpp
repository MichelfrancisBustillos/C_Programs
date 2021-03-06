//------------------------------LEVEL 1----------------------------------------------------------------------
#include<iostream>
#include<string>
#include<stdlib.h>
#include "variations.h"

using namespace std;

void game1 (int secret, int myGuess, int &numGuesses)
{
    secret = rand() % 10 + 1; //set correct number to random value between 1 and 10
    cout<<"Welcome, User!"<<endl;
    cout<<"Enter a number between 1 and 10: ", cin>>myGuess, cout<<endl;
    numGuesses++;
    
    system("CLS");
            while (myGuess != secret)
            {
                
                variations (myGuess, secret);
                cout<<"Enter a number between 1 and 10: ", cin>>myGuess, cout<<endl;
                numGuesses++;
                system("CLS");
            }
                
            if ( myGuess == secret )
            {
                cout<<"Your right!"<<endl;
                cout<<"It took "<<numGuesses<<" guesses!"<<endl<<endl<<endl;
            }    
}
