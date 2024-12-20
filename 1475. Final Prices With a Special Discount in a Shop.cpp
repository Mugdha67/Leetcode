#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define endl "\n"
#define pi acos(-1)
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define no  cout<<"no\n"
#define NO  cout<<"NO\n"
#define No  cout<<"No\n"
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define fin(a) for (auto &x : a) cin>>x
#define fout(a) for (auto &x : a) cout<<x<<" "; cout<<endl;

    vector<int> finalPrices(vector<int>& prices) {
        vector<int> x;
        for(int i=0;i<prices.size();i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[j]<=prices[i])
                {
                    prices[i]=prices[i]-prices[j];
                    break;
                }
            }
            x.pb(prices[i]);
        }
        fout(x);
    }
void Kuldip_Saha_Mugdha()
{
     vector<int>v={8,4,6,2,3};
    finalPrices(v);
}
//int32_t main()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Kuldip_Saha_Mugdha();
}

