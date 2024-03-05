#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int mod = 1000000007;
const int mod2 = 998244353;
const int N = 1e3 + 10;
const long long inf = 1e18+1;

void solve(){
    int n;
    cin >> n;
    int t=n;
    int a=1,b=1;
    int i;
    while(n>1){
        int j = 2*b;
        for(i=a;i<t;i+=j){
            if(i+b<=t){
                cout << i+b << ' ';
            }
        }
        if(n%2==0){
            n=n/2;
        }
        else{
            cout << a << ' ';
            a = (a+2*b)%t;
            if(a==0){
                a = t;
            }
            n = n/2;
        }
        b<<=1;
    }
    cout << a << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}