/***
⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡖⠁⠀⠀⠀⠀⠀⠀⠈⢲⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣼⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣧⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣸⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣇⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣿⣿⡇⠀⢀⣀⣤⣤⣤⣤⣀⡀⠀⢸⣿⣿⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣔⢿⡿⠟⠛⠛⠻⢿⡿⣢⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⣀⣤⣶⣾⣿⣿⣿⣷⣤⣀⡀⢀⣀⣤⣾⣿⣿⣿⣷⣶⣤⡀⠀⠀⠀⠀
⠀⠀⢠⣾⣿⡿⠿⠿⠿⣿⣿⣿⣿⡿⠏⠻⢿⣿⣿⣿⣿⠿⠿⠿⢿⣿⣷⡀⠀⠀
⠀⢠⡿⠋⠁⠀⠀⢸⣿⡇⠉⠻⣿⠇⠀⠀⠸⣿⡿⠋⢰⣿⡇⠀⠀⠈⠙⢿⡄⠀
⠀⡿⠁⠀⠀⠀⠀⠘⣿⣷⡀⠀⠰⣿⣶⣶⣿⡎⠀⢀⣾⣿⠇⠀⠀⠀⠀⠈⢿⠀
⠀⡇⠀⠀⠀⠀⠀⠀⠹⣿⣷⣄⠀⣿⣿⣿⣿⠀⣠⣾⣿⠏⠀⠀⠀⠀⠀⠀⢸⠀
⠀⠁⠀⠀⠀⠀⠀⠀⠀⠈⠻⢿⢇⣿⣿⣿⣿⡸⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠈⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠐⢤⣀⣀⢀⣀⣠⣴⣿⣿⠿⠋⠙⠿⣿⣿⣦⣄⣀⠀⠀⣀⡠⠂⠀⠀⠀
⠀⠀⠀⠀⠀⠈⠉⠛⠛⠛⠛⠉⠀⠀⠀⠀⠀⠈⠉⠛⠛⠛⠛⠋⠁⠀⠀

   * Author : SUARABH UPADHAYAY
   * E-mail : officialsaurabhupadhayay@gmail.com

   PRACTICE LIKE YOU NEVER WIN, PLAY LIKE YOU NEVER LOOSE


***/

#include<bits/stdc++.h>
//#include <boost/math/common_factor.hpp>
//#include <boost/multiprecision/cpp_ll.hpp>
//using namespace boost::multiprecision;
using namespace std;
#define lll cpp_ll
#define ull unsigned long long
#define ll long long
#define ui unsigned ll
#define ldb long double
//#define lcm(o,g) boost::math::lcm(o,g)
#define mod 1000000007
#define mod1 1000003
#define mod2 998244353
#define pi acos(-1)
#define full LLONG_MAX
#define V vector
#define VL vector<ll>
#define LL list<ll>
#define DL deque<ll>
#define PQL priority_queue<ll>
#define SL set<ll>
#define SC set<char>
#define M map
#define MLL map<ll,ll>
#define SS stringstream
#define mkp make_pair
#define mkt make_tuple
#define er equal_range
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define np next_permutation
#define ln length()
#define em empty()
#define DO greater<ll>()
#define DM greater<ll>
#define pb push_back
#define in insert
#define pob pop_back()
#define bg begin()
#define fr front()
#define ed end()
#define bk back()
#define sz size()
#define all(o) ((o).bg,(o).ed)
#define alld(o) ((o).bg,(o).ed,DO)
#define F first
#define S second
#define stf shrink_to_fit()
#define ig cin.ignore(1,'\n');
#define cg(g) getline(cin,(g))
#define f(g,h,o) for(ll g=h;g<o;g++)
#define f1(g,h,o) for(ll g=h;g>o;g--)
#define f2(g) for(auto E : (g))
#define fm(g) for(auto [X,Y] : (g))
#define AI(g,o) VL g(o); f(i,0,o)cin>>g[i]
#define AO(g,o) f(i,0,o)cout<<g[i]<<" "
#define T ui t; cin>>t; while(t--)
#define T1(g) ui g; cin>>g; while(g--)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

void printknapSack(ll W, ll wt[], ll val[], ll n) {
    ll i, w;
    ll K[n + 1][W + 1];

    f(i,0,n+1) {
        f(w,0,W+1) {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }

    ll res = K[n][W];

    w = W;
    VL ans;
    for (i = n; i > 0 && res > 0; i--) {

        if (res == K[i - 1][w])
            continue;
        else {
            ans.pb(i);

            res = res - val[i - 1];
            w = w - wt[i - 1];
        }
    }
    cout<<ans.size()<<endl;
    for(ll i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    //cout<<fixed<<setprecision(10)

    ll n, W;
    cin >> n >> W;
    ll w[n],v[n];
    f(i,0,n)
        cin >> w[i] >> v[i];

    printknapSack(W, w, v, n);
}
