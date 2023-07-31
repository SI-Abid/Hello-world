#include <bits/stdc++.h>
using namespace std;

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    ostream_iterator<T> out(os, " ");
    copy(v.begin(), v.end(), out);
    return os;
}

bool rbs(string s)
{
    stack<char> st;
    for (auto c : s)
    {
        if (c == '(')
            st.push(c);
        else
        {
            if (st.empty())
                return false;
            st.pop();   
        }
    }
    return st.empty();
}

signed main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int _;
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt1,cnt2;
        cnt1 = cnt2 = 0;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(cnt1>0){
                    cnt1--;
                    ans[i] = 2;
                }
                else{
                    cnt2++;
                    ans[i] = 1;
                }
            }
            else{
                if(cnt2>0){
                    cnt2--;
                    ans[i] = 1;
                }
                else{
                    cnt1++;
                    ans[i] = 2;
                }
            }
        }
        string a,b;
        a = b = "";
        for(int i=0;i<n;i++){
            if(ans[i]==1){
                a+=s[i];
            }
            else{
                b+=s[i];
            }
        }
        reverse(b.begin(),b.end());
        // cout<< a << ' ' << b << '\n';
        if(!rbs(a) || !rbs(b)){
            cout <<"-1\n";
            continue;
        }
        int col = set<int>(ans.begin(),ans.end()).size();
        cout << col << '\n';
        if(col==1)
        {
            fill(ans.begin(),ans.end(),1);
        }
        for(int i=0;i<n;i++){
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}