#include<iostream>
#include<tuple>
#include<string>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<set>
#include<unordered_set>
#include<bitset>
#include<cmath>
#include<numeric>
#include<algorithm>
#include<stack>

// #include<bits/stdc++.h>
//sum of sqaures of natural no--- n(n + 1)(2n + 1)/6
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pi;
typedef vector<pi > vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll,ll> pl;
typedef vector<pl > vll;

const ll mo=(1000000000 + 7);
const ll inf=1e18;

#define f(i,a,b) for(int i=a;i<b;i++)
#define fm(i,a,b) for(int i=a;i>b;i--)
#define fbe(s) s.begin(),s.end()
#define fs(p) p.size()
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define it iterator
#define mt make_tuple
 

pi final_pos(int n,int m,int x,int y)
{
    if()
}



void solve()
{
    int n,m,i1,j1,i2,j2;
    string d;
    cin>>n>>m>>i1>>j1>>i2>>j2>>d;

    vvi v(n+1,vi(m+1,0));
    v[i1][j1]=1;
    int x=i1,y=j1;
    check=0;
    while(true)
    {
        if(d=="DL")
        {
            int k=min(m-x,n-y);
            f(i,1,k)
            {
                v[y+i][x-i]=1;
                if(y+i==i1 && x+i==j1)
                {
                    check=1;
                    break;
                }
            }
            if()
            if(check)
            {
                break;
            }
        }
        else if(d="UL")
        {

        }
        else if(d="DR")
        {

        }
        else
        {

        }
    }
    // unordered_map<string,int> smap;
    // smap
}
 
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t-->0)
    {
        solve();
    }
}
