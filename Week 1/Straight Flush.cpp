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

ll toRank(char c) {
    switch (c) {
        case 'T': return 10;
        case 'J': return 11;
        case 'Q': return 12;
        case 'K': return 13;
        case 'A': return 14;
    }

    assert('2' <= c && c <= '9');
    return c - '0';
}

int main() {
    cin.sync_with_stdio(false);
    cin.tie(0);

    VL ranks;
    SC suits;
    f(i,0,5){
        string card;
        cin >> card;
        ranks.pb(toRank(card[0]));
        suits.in(card[1]);
    }

    if (suits.size() > 1) {
        cout << "NO\n";
        return 0;
    }

    sort(ranks.bg, ranks.ed);
    f(i,0,4) {
        if (ranks[i] + 1 != ranks[i + 1]) {
            if (i < 3 || ranks[0] != 2 || ranks[4] != 14) {
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";
    
    return 0;
}
