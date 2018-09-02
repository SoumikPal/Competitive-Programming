//Given an array of distinct integers, print all the pairs having positive value and negative value of a number that exists in the array.

//NOTE: If there is no such pair in the array , print "0".



#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mp make_pair
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin>>n;
  map<ll,ll>mp;
  map<ll,ll>res;
  map<ll,ll>::iterator it;
  for(ll i=0;i<n;i++)
  {
    ll c;
    cin>>c;
    mp[abs(c)]+=c;
    if(mp[abs(c)]==0)
      res[abs(c)]++;

  }
  for(it=res.begin();it!=res.end();it++)
  {
    ll a=it->first;
    ll b=it->second;
    if(a!=0)
    {
      for(ll i=1;i<=b;i++)
      {
        cout<<a<<" "<<-a<<"\n";
      }
    }
  }

}
