//SAURABHSAHAB
//#include <boost/math/common_factor.hpp>
//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define lcm(x,y) boost::math::lcm(x,y)
#define mod 1000000007
#define VL vector<ll>
#define VS vector<string>
#define LL list<ll> 
#define SL set<ll>
#define SC set<char>
#define USL unordered_set<ll>
#define USC unordered_set<char>
#define MSL multiset<ll>
#define MSC multiset<char>
#define MLL map<ll,ll>
#define MCL map<char,ll>
#define UMLL unordered_map<ll,ll>
#define UMCL unordered_map<char,ll>
#define MMLL multimap<ll,ll> 
#define MMCL multimap<char,ll>
#define mkp make_pair
#define mkt make_tupple
#define ln length()
#define DO greater<ll>()
#define er equal_range
#define pb push_back
#define in insert
#define pop pop_back()
#define bg begin()
#define ed end()
#define full INT_MAX
#define stf shrink_to_fit()
#define f(i,s,n) for(ll i=s;i<n;i++)
#define f1(i,s,n) for(ll i=s;i>n;i--)
#define f2(s) for(auto E : s)
#define it(u) ::iterator E=u.bg
#define F first
#define S second 
#define AI(a,n) ll a[n]; f(i,0,n)cin>>a[i]
#define AO(a,n) f(i,0,n)cout<<a[i]<<" "
#define T ll t; cin>>t; while(t--)
#define TC cerr<<"\nTime elapsed: "<<1000*clock() /CLOCKS_PER_SEC <<"ms\n";

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   ll n;
   cin>>n;
   ll a[n+1][n+1]={(0,0)};
   f(i,1,n+1){
       f(j,1,n+1){
           cin>>a[i][j];
       }
   }
   string s,an;
   stringstream ss;
   ll r=0;
   f(i,1,n+1){
       r=(r*10)+i;
   }
   ss<<r;
   ss>>s;
   ll p=0;
   ll ans=full;
   ll q,t;
   f(i,0,s.ln-1){
       q=s[i]-'0';
       t=s[i+1]-'0';
       p=p+a[q][t];
   }
   if(ans>p){
       ans=p;
       an=s;
   }
   p=0;
   while(next_permutation(s.bg,s.ed)){
        f(i,0,s.ln-1){
       q=s[i]-'0';
       t=s[i+1]-'0';
       p=p+a[q][t];
   }
   if(ans>p){
       ans=p;
       an=s;
   }
   p=0;
   }
   f(i,0,an.ln){
       cout<<an[i]<<" ";
   }
}
