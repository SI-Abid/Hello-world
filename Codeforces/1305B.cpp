#include "bits/stdc++.h"
#define uint unsigned int
using namespace std;

int main()
{
	string s;
	cin >> s;
	uint l = 0, r = s.size()-1;
	vector<int> lt, rt;
	
	while(l<r)
	{
		while(l < s.size() && s[l] == ')')
			l++;
		while(r >= 0 && s[r] == '(')
			r--;
		if(l < s.size() && r >= 0 && l < r) 
		{
			lt.push_back(l + 1);
			rt.push_back(r + 1);
			l++;	r--;
		}
	}
	if(lt.empty())
	{
		cout << 0 << endl;
		return 0;
	}
	
	cout << 1 << endl;
	cout << 2*rt.size() << endl;
	
	for(auto i : lt)
	{
		cout << i << " ";
	}
	reverse(rt.begin(), rt.end());
	for(auto x : rt)
	{
		cout << x << " ";
	}
	cout<<endl;
	return 0;
}
