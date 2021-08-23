#include<iostream>
#include<fstream>
#include<set>
using namespace std;

string convert(string in)
{
    string out="";
    for(char c:in)
        if((c>='A' && c<='Z')||(c>='a' && c<='z'))
            out+=(c>='A' && c<='Z')?(char)c^1<<5:c;
    return out;
}

int main()
{
    ofstream ofile("out.txt");
    ifstream ifile("in.txt");
    string s;

    set<string> st;
    while(ifile>>s)
        st.insert(convert(s));
    
    cout<<st.size()<<endl;
    for(auto x:st)
        ofile<<x<<endl;
    
    return 0;
}