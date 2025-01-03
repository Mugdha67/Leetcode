#include<bits/stdc++.h>
#include<vector>
#include<string>
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
bool vowel(char c)
{
    return(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        vector<int>prefixSum(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(vowel(words[i][0])&&vowel(words[i].back()))
            {
                prefixSum[i+1]=prefixSum[i]+1;
            }
            else
            {
                prefixSum[i+1]=prefixSum[i];
            }
        }
        vector<int> naima;
        for(int i=0;i<queries.size();i++)
        {
            int l=queries[i][0];
            int r=queries[i][1];
            naima.pb(prefixSum[r+1]-prefixSum[l]);
        }
        return naima;
}
void Kuldip_Saha_Mugdha()
{
    vector<string>words={"aba","bcb","ece","aa","e"};
    vector<vector<int>>queries={{0,2},{1,4},{1,1}};
    vector<int>ans=vowelStrings(words,queries);;
    fout(ans);    
}
//int32_t main()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Kuldip_Saha_Mugdha();
}