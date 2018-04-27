#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    string ch;
    int c;
    cout << "Enter the encryption/decryption code:";
    cin >> c;
    cout << "----Enter your message below----"<< endl;
    getchar();

    getline(cin, ch);
    int len = ch.length();
    cout << "Your crypted code is:---"<<endl;

    for (int i=0;i<len;i++)
    {
        if (ch.at(i) >= 'A' && ch.at(i) <= 'Z')
        {
            ch.at(i) = ((ch.at(i) - 'A' + c)%26)+'A';
        }
    else if (ch.at(i) >= 'a' && ch.at(i) <= 'z')
        {
            ch.at(i) = ((ch.at(i) - 'a' + c)%26)+'a';
        }
    }
    cout << ch << endl;

    getchar();
    cout << "Have a nice day sir :-)";
    return 0;
}

