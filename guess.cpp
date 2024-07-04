#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int guesses=10;
    int guess;
    int answer;

    srand(time(NULL));
    answer = rand()%20+1;
    
    cout<<"welcome to guessing game.\n";
    cout<<" number guessed between 1 and 20, can you guess in" << guesses << "tries?\n";

    for (int i=0;i<guesses;i++)
    {
        cout<<"guess"<<i+1<<":" ;
        cin>>guess;
        if( guess != answer)
        {
            if(guess>answer)
            cout<<"to high.\n";
            else
            cout<<"to low.\n";
        }
        else
        {
            cout<<"you won!/n";
            system("pause");
            return 0;
        }
    }
     cout<<"you lost!/n";
     cout<<("the correct answer was: ")<<answer<<endl;
     system("pause"); 
     return 0;
}