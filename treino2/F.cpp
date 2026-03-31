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

    vector <int> v;
    int n,i;
    cin>>n;
    for (i=0;i<n;i++) {
        int x; 
        cin>>x;
        v.push_back(x); 
    }
    sort(v.begin(), v.end());
    for (i=0;i<n;i++){
        cout << v[i] << " ";
    }
}
