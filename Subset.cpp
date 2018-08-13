#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void subset(vector<vector<ll>>&res,vector<ll>&v,ll s,vector<ll>temp)
{
	ll n=v.size();
	if(s==n)
	{
		res.push_back(temp);
		return;
	}
	ll curr=s+1;
	while(curr<n&&v[curr]==v[s])
		++curr;
	for(ll j=0;j<=curr-s;j++)
	{
		vector<ll>temp1(temp);
		for(ll k=1;k<=j;k++)
		{
            temp1.push_back(v[s]);
		}
		subset(res,v,curr,temp1);
	}
}
int main()
{
	vector<ll>v;
	ll n;
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		ll d;
		cin>>d;
		v.push_back(d);
	}
	sort(v.begin(),v.end());
	vector<vector<ll>>res;
	vector<ll>temp;
	subset(res,v,0,temp);
	sort(res.begin(),res.end());
	for(ll i=0;i<res.size();i++)
	{
		for(ll j=0;j<res[i].size();j++)
		{
			cout<<res[i][j]<<" ";
		}
		cout<<"\n";
	}

}
