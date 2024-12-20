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

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> haldu;
    for (int i = 0; i < nums.size(); i++) {
        int eda_mone = target - nums[i];
        if (haldu.find(eda_mone) != haldu.end()) {
            return {haldu[eda_mone], i}; 
        }
        haldu[nums[i]] = i; 
    }
    return {}; 
}

void Kuldip_Saha_Mugdha() {
    vector<int> v = {3, 2, 4};
    int t = 6;
    vector<int> result = twoSum(v, t);
    if (!result.empty())
        cout << result[0] << " " << result[1] << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Kuldip_Saha_Mugdha();
}

