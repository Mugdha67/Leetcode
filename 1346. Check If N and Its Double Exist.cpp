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

    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<arr.size();j++)
            {
                if(i==j)continue;
                else if(arr[i]==2*arr[j]) return true;
            }
        }
        return false;  
    }
void Kuldip_Saha_Mugdha()
{
     vector<int>v={10,2,5,3};
     bool b=checkIfExist(v);
    if(b) cout<<"true"<<endl;
    else cout<<"false"<<endl;
 
}
//int32_t main()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Kuldip_Saha_Mugdha();
}

