#include <iostream>
#include <stdio.h>
// #include <conio.h>
using namespace std;

class Hangman
{
    int p, cho;

public:
    void description()
    {
        cout << "\n\n";
        cout << "\t\t\t\t\t\t*******************" << endl;
        cout << "\t\t\t\t\t\t*  H A N G M A N  *" << endl;
        cout << "\t\t\t\t\t\t*  " << char(95) << " " << char(95) << " " << char(95) << " " << char(95) << " " << char(95) << " " << char(95) << " " << char(95) << "  *" << endl;
        cout << "\t\t\t\t\t\t*                 *" << endl;
        cout << "\t\t\t\t\t\t*******************" << endl;

        cout << "\n\n";
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
        cout << "$$                                                                                                   $$" << endl;
        cout << "$$  Details of HANGMAN                                                                               $$" << endl;
        cout << "$$                                                                                                   $$" << endl;
        cout << "$$  The hangman, also known as " << char(34) << "hanged" << char(34) << " is a classic game in which you will have to guess a          $$" << endl;
        cout << "$$  word by choosing the letters that you think may be included in it.The hangman game will          $$" << endl;
        cout << "$$  give you the option to choose vowels and consonants to try to guess which word is                $$" << endl;
        cout << "$$  hidden. You will have to three chance for guess word which word is hidden.                       $$" << endl;
        cout << "$$                                                                                                   $$" << endl;
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
    }
    void choice()
    {
        int p;
        cout << "\n\nIf you want to procced this game so press 0 and exit for this task so press 1";
        cout << "\nEnter your choice : ";
        cin >> p;

        if (p == 1)
        {
            exit;
        }
        else
        {
            cout << "\n1. Play \n2. Score \n3. Exit";
            cout << "\nEnter you choice : ";
            cin >> cho;
        }
    }
};

int main()
{
    Hangman des;
    des.description();
    des.choice();

    return 0;
}
