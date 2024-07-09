#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{

    cout << "Welcome to GuessThe number game! "
    <<endl;
    cout << "You have to guess a number between 1 and 100. "
    "You' ll have limited choices baesd on the "
    "level you choose.Good Luck!"
    <<endl;

    while (true) {
cout <<"\nEnter the difficulty level: \n";
cout <<"1 for easy!\t";
cout <<"2 for medium !\t";
cout << "0 for ending the game!\n" << endl;

// select the level of difficulty 
int difficultychoice;
cout <<"Enter the number : ";
cin >> difficultychoice;

// generating the secret number 
srand (time(0));
int secretNumber = 1 + (rand() % 100);
int playerchoice;

// Difficulty Level Easy
if (difficultychoice == 1){
    cout << "\nYou have 10 choices for finding the "
    "secret number between 1 nad 100.";
    int choicesLeft = 10;
    for (int i = 1; i <=10; i++){

        // prompting the playerchoice matches 
        // number

        cout <<"\n\nEnter the number :";
        cin >> playerchoice;

        // determining the playerchoice matches 
        // the secret number 
        if (playerchoice == secretNumber){

        cout << "Well played! you won, "
        << playerchoice
        << " is the secert number " << endl;
        cout << "\t\t\t Thanks for playing...."
        << endl;
        cout << "play the game again with  "
        "us!!\n\n"
        << endl;
        break;
        }
        else {
            cout << "Nope, " << playerchoice
            << " is not the right number\n";
            if (playerchoice > secretNumber ){
                cout << "the secret number is "
                "smaller than the number "
                "you have chosen"
                <<endl;


            }
            else {
                cout << "The secret number is "
                "greater than the number "
                "You have chosen"
                << endl;
                
                            }
        }
        choicesLeft--;
    cout << choicesLeft << " choices left. "
    << endl;
    if ( choicesLeft == 0){
        cout << "You couldn't find the "
        "secret number , it was "
        << secretNumber
        << ", you lose!!\n\n";
        cout << "play the game again to "
        "win!!!\n\n";

         }
      }
    }

// Difficilty level : medium 
else if (difficultychoice == 2){
    cout << "\nYou have 7 choices for finding the "
       "secret number between 1 and 100.";
    int choicesLeft = 7;
    for ( int i = 1; i <=7; i++){

        // prompting the player to guess the secret 
        // number 
        cout << "\n\nEnter the number: ";
        cin >> playerchoice;

        // determining if teh playerchoice matches
        // the secert number 
        if (playerchoice == secretNumber){
            cout << "well payed! you won, "
            << playerchoice 
            << " is the secret number" << endl;

            cout << "\t\t\t Thanks for playing ...."
            << endl;
            cout << "play the game again with "
            "us!!\n\n"
            << endl;
            break;

        }
        else {
            cout << "Nope, " << playerchoice
            << " is not the right number\n";
            if (playerchoice > secretNumber){
                cout << "The secret number is "
                "smaller than the number "
                "you have chosen"
                << endl;
            }
            else {

                cout << "The secret number is "
                "greater than the number "
                "you have chosen"
                << endl;
             }
            choicesLeft--;
             cout << choicesLeft << " choices left."
             << endl;
             if (choicesLeft == 0){
            cout << "You couldn,t find the "
            "secret number, it was "
            << secretNumber
            << ", you lose!!\n\n";
            cout << "play the game again to "
            "win!!!\n\n";

             }
             
         }
    
    }

}
// difficulty level : medium 
else if (difficultychoice == 3){
    cout <<"\nYou have 5 choices for finding the "
    "secret number between 1 and 100.";
    int choicesLeft = 5;
    for (int i = 1; i <=5; i++){
        //prompting the player to guess the secret 
        //number
        cout << "\n\nEnter the number: ";
        cin >> playerchoice;

        // determining if the playerchoice matches
        // the secret number

        if (playerchoice == secretNumber){
            cout << "well played! you won, "
            << playerchoice
            <<" is the secret number " << endl;
            cout << "\t\t\t Thanks for playing...."
            << endl;
            cout << "play the game again with "
            "us!!\n\n"
            << endl;
            break;

        }
        else {
            cout << "Nope," << playerchoice
            << "is not the right number \n ";
            if (playerchoice > secretNumber){
                cout << "The secret number is"
                "smaller than the number"
                "you have chosen"
                << endl;

            }
            else {
                cout << "The secret number is "
                "grater than the number "
                "You have chosen"
                << endl;

            }
            choicesLeft--;
            cout << choicesLeft << " choices left."
            << endl;
            if (choicesLeft == 0){
                cout << "you couldn't find the "
                "secret number , it was "
                << secretNumber
                << ", You lose!!\n\n ";
                cout << "play the game again to "
                "win!!!\n\n";

            }

         }
    }
            
}
// To end the game 
else if (difficultychoice == 0){
    exit(0);

}
else {
    cout << "wrong choice, Enter valid choice to"
    "play the game! (0,1,2,3)"
    << endl;
    }
  }
    return 0;
}