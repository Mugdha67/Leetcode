#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define pb push_back
#define endl "\n"
#define pi acos(-1)
#define YES cout << "YES\n"
#define Yes cout << "Yes\n"
#define yes cout << "yes\n"
#define no cout << "no\n"
#define NO cout << "NO\n"
#define No cout << "No\n"
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define fin(a) for (auto &x : a) cin >> x
#define fout(a) for (auto &x : a) cout << x << " "; cout << endl;

int waysToSplitArray(vector<int> &nums) {
    int n=nums.size(),i,c=0;
    vector<long long>psum(n);
    psum[0]=nums[0];
    for(i=1;i<n;i++) 
    {
        psum[i]=psum[i-1]+nums[i];
    }
    long long sum=psum[n-1];
    for(i=0;i<n-1;i++) 
    {
        long long l=psum[i];
        long long r=sum-l;
        if (l>=r) {
            c++;
        }
    }
    return c;
}

void Kuldip_Saha_Mugdha() {
    // vector<int> nums1 = {10, 4, -8, 7};
    // cout<<waysToSplitArray(nums1)<<endl;
    vector<int> nums2 = {2, 3, 1, 0};
    cout<<waysToSplitArray(nums2)<<endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Kuldip_Saha_Mugdha();
    return 0;
}
