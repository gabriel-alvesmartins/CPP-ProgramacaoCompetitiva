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

    int n,i;
    cin >> n;
    set<int> conjunto;
    for (i= 0;i<n;i++){
        int x;
        cin >> x;
        conjunto.insert(x);
    }
    cout << conjunto.size();    
}
