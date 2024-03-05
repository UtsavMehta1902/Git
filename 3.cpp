#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

const int mod = 1000000007;
const int mod2 = 998244353;
const int N = 1e3 + 10;
const long long inf = 1e18+1;

void solve(){
    int n,x;
    cin >> n >> x;
    int ans = 0;
    if((n-x)%2!=0){
        cout << 0 << endl;
        return;
    }  
    int l = (n-x)/2;
    int r = (n+x)/2;
    r--;
    int sl = sqrt(l);
    int sr = sqrt(r);
    int i;
    for(i=1;i<sl;i++){
        if(l%i==0){
            //cout << i << ' ';
            if(i>=(x-1)){
                ans+=2;
            }
            else{
                ans++;
            }
        }
    }
    if(l%sl==0){
        //cout << sl << ' ';
        ans++;
    }
    //cout << endl;
    for(i=1;i<sr;i++){
        if(r%i==0){
           // cout << i << ' ';
            if(i>=(x-1)){
                ans+=2;
            }
            else{
                ans++;
            }
        }
    }
    if(r%sr==0){
        //cout << sr << ' ';
        ans++;
    }
    //cout << endl;
    if(x==1 || (n-x)%(2*x-2)==0){
        ans--;
    }
    cout << ans << endl;
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