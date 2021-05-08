#include "Home.cpp"

class Bank
{
    int ch;
    void options(int);

public:
    void choise();
};

void Bank::choise()
{
    system("clear"); // for clearing screen
    cout << "\t\t\t\t\t_____________________  BANK AUTOMATION SYSTEM  ______________________" << endl;

    cout << "\t\t\t\t\t_____________________________________________________________________" << endl
         << endl;

    cout << "\t\t\t\t\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><" << endl;
    cout << "\t\t\t\t\t< * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * >" << endl;
    cout << "\t\t\t\t\t< *                                                               * >" << endl;
    cout << "\t\t\t\t\t< *                           MAIN MENU                           * >" << endl;
    cout << "\t\t\t\t\t< *                                                               * >" << endl;
    cout << "\t\t\t\t\t< *          1. Open an Account                                   * >" << endl;
    cout << "\t\t\t\t\t< *          2. View Account Details                              * >" << endl;
    cout << "\t\t\t\t\t< *          3. Modify Account Details                            * >" << endl;
    cout << "\t\t\t\t\t< *          4. Balance Enquiry                                   * >" << endl;
    cout << "\t\t\t\t\t< *          5. Cash Deposit                                      * >" << endl;
    cout << "\t\t\t\t\t< *          6. Cash WithDraw                                     * >" << endl;
    cout << "\t\t\t\t\t< *          7. EXIT                                              * >" << endl;
    cout << "\t\t\t\t\t< *                                                               * >" << endl;
    cout << "\t\t\t\t\t< * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * >" << endl;
    cout << "\t\t\t\t\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><" << endl;

    cout << "\n\n\n";
    cout << "\t\t\t\t\t= = = = = = = = = = = = = = = = = = = = =" << endl;
    cout << "\t\t\t\t\t=                                       =" << endl;
    cout << "\t\t\t\t\t=          Enter Your Choise            =" << endl;
    cout << "\t\t\t\t\t=                                       =" << endl;
    cout << "\t\t\t\t\t= = = = = = = = = = = = = = = = = = = = =" << endl;
    cout << "\t\t\t\t\t============================::";
    int ch;
    cin >> ch;

    options(ch);
}

void Bank::options(int x)
{
    switch (x)
    {
    case 1:
        cout << "account opening..." << endl;
        break;
    case 2:
        cout << "view Account Details..." << endl;
        break;
    case 3:
        cout << "Modify Account Details..." << endl;
        break;
    case 4:
        cout << "Balance Enquiry..." << endl;
        break;
    case 5:
        cout << "Cash Deposit..." << endl;
        break;
    case 6:
        cout << "Cash Withdraw" << endl;
    case 7:
        cout << "Exiting now...." << endl;
        exit(0);

    default:
        choise();
    }
}
