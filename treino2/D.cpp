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

    int a,b,valor;
    cin >> a >> b;
    valor = b-a+1;
    if (valor<0){
        cout << "0";
    } else{
        cout << valor;
    }
}
