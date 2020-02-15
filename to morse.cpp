#include<iostream>
using namespace std;
string morseconv(char a)
{
    switch (a)
    {
        case 'a': return ".-";
        case 'b': return "-...";
        case 'c': return "-.-.";
        case 'd': return "-..";
        case 'e': return ".";
        case 'f': return "..-.";
        case 'g': return "--.";
        case 'h': return "....";
        case 'i': return "..";
        case 'j': return ".---";
        case 'k': return "-.-";
        case 'l': return ".-..";
        case 'm': return "--";
        case 'n': return "-.";
        case 'o': return "---";
        case 'p': return ".--.";
        case 'q': return "--.-";
        case 'r': return ".-.";
        case 's': return "...";
        case 't': return "-";
        case 'u': return "..-";
        case 'v': return "...-";
        case 'w': return ".--";
        case 'x': return "-..-";
        case 'y': return "-.--";
        case 'z': return "--..";
    }
}
int main()
{
    string c;
    cout<<"--Input Text Below--"<<endl;
    getline(cin,c);
    cout<<"-=Your encoded message is=-"<<endl;
    for(int i=0;c[i]!=NULL;i++)
    {
        if(c[i]==' ')cout<<"|";
        else cout<<morseconv(c[i])<<" ";
    }
    return 0;
}
