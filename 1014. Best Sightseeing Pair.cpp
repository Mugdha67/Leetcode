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
int maxScoreSightseeingPair(vector<int>& values) {
    int maxPotential=values[0];
    int Max=0;
    for (int j=1;j<values.size();++j) {
        Max=max(Max,maxPotential+values[j]-j);
        maxPotential=max(maxPotential,values[j]+j);
    }
    return Max;
}
void Kuldip_Saha_Mugdha()
{
     //vector<int>v={8,1,5,2,6};
    vector<int>v={1,3,5};
    cout<<maxScoreSightseeingPair(v)<<endl;

}
//int32_t main()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Kuldip_Saha_Mugdha();
}
