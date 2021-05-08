#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void choise();
void options(int);
void intro();
void pause();

int main()
{
    intro();
    choise();

    return 0;
}

void intro()
{
    cout << "\n\n\n\n\n\n\t\t\t ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "\t\t\t ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "\t\t\t ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "\t\t\t ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "\t\t\t +++++++++++++                                                +++++++++++++++" << endl;
    cout << "\t\t\t +++++++++++++                                                +++++++++++++++" << endl;
    cout << "\t\t\t +++++++++++++      (^^)   Bank Automation System  (^^)       +++++++++++++++" << endl;
    cout << "\t\t\t +++++++++++++                                                +++++++++++++++" << endl;
    cout << "\t\t\t +++++++++++++                 ---->>> BY <<<---              +++++++++++++++" << endl;
    cout << "\t\t\t +++++++++++++                                                +++++++++++++++" << endl;
    cout << "\t\t\t +++++++++++++                                                +++++++++++++++" << endl;
    cout << "\t\t\t ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "\t\t\t ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "\t\t\t ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "\t\t\t ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "\t\t\t +++++++++++++                                                +++++++++++++++" << endl;
    cout << "\t\t\t +++++++++++++                                                +++++++++++++++" << endl;
    cout << "\t\t\t +++++++++++++                   SAHIL                        +++++++++++++++" << endl;
    cout << "\t\t\t +++++++++++++                                                +++++++++++++++" << endl;
    cout << "\t\t\t +++++++++++++                   AMIT                         +++++++++++++++" << endl;
    cout << "\t\t\t +++++++++++++                                                +++++++++++++++" << endl;
    cout << "\t\t\t +++++++++++++                   SHAHNAWAZ &                  +++++++++++++++" << endl;
    cout << "\t\t\t +++++++++++++                                                +++++++++++++++" << endl;
    cout << "\t\t\t +++++++++++++                   SUNIL                        +++++++++++++++" << endl;
    cout << "\t\t\t +++++++++++++                                                +++++++++++++++" << endl;
    cout << "\t\t\t +++++++++++++                                                +++++++++++++++" << endl;
    cout << "\t\t\t ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "\t\t\t ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "\t\t\t ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "\t\t\t ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "\n\n\n\n\t\t\t\t++++++++++++++( Loading Home page please wait )++++++++++++++++" << endl;

    // std::this_thread::sleep_for(5s);
    // sleep();
    pause();
    system("cls");
    cout << "\n\n\n\n\n\t\t\t\t++++++++++++++++++( Loading Home page please wait )++++++++++++" << endl;
    // std::this_thread::sleep_for(2s);
    pause();
}
void choise()
{
    system("cls"); // for clearing screen
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
void options(int x)
{
    switch (x)
    {
    case 1:
        cout << "Account opening..." << endl;
        break;
    case 2:
        cout << "View Account Details..." << endl;
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
        cout << "Cash Withdraw..." << endl;
    case 7:
        cout << "Exiting now...." << endl;
        exit(0);

    default:
        choise();
    }
}
void pause()
{
    int pause = 1000000000;
    for (int i = 0; i < pause; i++)
        ;
}
