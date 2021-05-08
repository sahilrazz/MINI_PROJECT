#include "Bank.cpp"
class SubBank : public Bank
{
    typedef struct Data
    {
        string AccountHolderName;
        string 

    }, D;

public:
    void NewAccount(string);
    void Details()
};
void SubBank::NewAccount(string Id)
{
    cout << "Account being opened...." << endl;
}