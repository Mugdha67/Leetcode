#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
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

int maxChunksToSorted(vector<int>& arr) {
    int haldu = 0;
    int naima = 0;

    for (int i = 0; i < arr.size(); ++i) {
        haldu = max(haldu, arr[i]);
        if (haldu == i) {
            ++naima;
        }
    }
    return naima;
}
void Kuldip_Saha_Mugdha()
{
     vector<int>v={4, 3, 2, 1, 0};
     cout<<maxChunksToSorted(v)<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Kuldip_Saha_Mugdha();
}
