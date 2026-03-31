#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
#define f first
#define s second 
#define ll long long 
#define el "\n"

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t,i;
    cin >> t;
    while (t>0){
        int n;
        cin>>n;
        vector<int> a(n);
        for (i=0;i<n;i++){
            int x;
            cin >> x;
            a[i] = x;
        } 
        sort(a.begin(),a.end());
        int l = 0;
        for (i=0;i<n-1;i++){
            if (a[i]==a[i+1]){
                l = 1;
                break;
            }            
        }
        if (l==1){
        cout << "No" << el;
        } else{
            cout << "Yes" << el;
        }
        t--;
    }
}
