#include <iostream>
#include <cstdlib>
using namespace std;
int guessNumber(int score, int& attempts){
    int inputUser;
    int randNo=rand() % 100 + 1;
    cout<<"Welcome to number guessing game! "<<endl;

    while(true){
        cout<<"\nEnter any number between the range of (1-9): ";
        cin>>inputUser;
        attempts++;

        if(inputUser==randNo) {
            cout<<"\nCongratulations! You guessed correct number in "<<attempts<<" attempts."<<endl;
            score++;
            break;
        } else if(inputUser>randNo){
            cout<<"Your Guess is too High."<<endl;
        } else{
            cout<<"Your Guess is too Low."<<endl;
        }
    }

    return score;
}

int main(){
    string name;
    int score=0;
    int attempts=0; 

    int game=guessNumber(score, attempts);
    cout<<"\nGame End. You Played So Well!"<<endl;
    cout<<endl;
    

    return 0;
}

