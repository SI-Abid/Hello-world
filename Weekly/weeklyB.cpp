#include "bits/stdc++.h"
#define uint unsigned int
#define ll long long
using namespace std;
int main ()
{
	string s;
	cin>>s;
	int time, h, m;
	h = (s[0]-'0')*10 + (s[1]-'0');
	m = (s[3]-'0')*10 + (s[4]-'0');
	time = h*60 + m;
	
	if(time>=0 && time<70)
		cout<<"01:10";
	else if(time>=70 && time<140)
		cout<<"02:20";
	else if(time>=140 && time<210)
		cout<<"03:30";
	else if(time>=210 && time<280)
		cout<<"04:40";
	else if(time>=280 && time<350)
		cout<<"05:50";
	else if(time>=350 && time<601)
		cout<<"10:01";
	else if(time>=601 && time<671)
		cout<<"11:11";
	else if(time>=671 && time<741)
		cout<<"12:21";
	else if(time>=741 && time<811)
		cout<<"13:31";
	else if(time>=811 && time<881)
		cout<<"14:41";
	else if(time>=881 && time<951)
		cout<<"15:51";
	else if(time>=951 && time<1202)
		cout<<"20:02";
	else if(time>=1202 && time<1272)
		cout<<"21:12";
	else if(time>=1272 && time<1342)
		cout<<"22:22";
	else if(time>=1342 && time<1412)
		cout<<"23:32";
	else
		cout<<"00:00";
	cout<<endl;
	return 0;
}
