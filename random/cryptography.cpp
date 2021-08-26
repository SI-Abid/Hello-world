#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    string ch;
    int i, n, m;
    cout << "Enter the encryption/decryption code(1-forward)(2-inverse):";
    cin >> n;
    cout << "----Enter your message below----"<< endl;
    getchar();

    getline(cin, ch);
    int len = ch.length();
    cout << "Your crypted code is:---"<<endl;
    if(n==1)
    {
    for(int j=1;j<26;j++)
    {
    for (int i=0;i<len;i++)
    {
        if (ch.at(i) >= 'A' && ch.at(i) <= 'Z')
        {
            ch.at(i) = ((ch.at(i) - 'A' + 1)%26)+'A';
        }
        else if (ch.at(i) >= 'a' && ch.at(i) <= 'z')
        {
            ch.at(i) = ((ch.at(i) - 'a' + 1)%26)+'a';
        }
    }
    printf("%2d: ",j);
    cout << ch << endl;
    }
    }
    else if(n==2)
    {
        for (i=0;i<len;i++)
        {
            if (ch.at(i) >= 'A' && ch.at(i) <= 'Z')
        {
            ch.at(i) = ('A'+'Z') - ch.at(i);
        }
        else if (ch.at(i) >= 'a' && ch.at(i) <= 'z')
        {
            ch.at(i) = ('a'+'z') - ch.at(i);
        }
        }
        cout << ch << endl;
    }
    getchar();
    cout << "Have a nice day sir "<<endl<<endl;
    cout << "      **    **      "<<endl<<endl;
    cout << " **              ** "<<endl;
    cout << "   **          **   "<<endl;
    cout << "      ********      "<<endl;
    return 0;
}

