            ///~~~LOTA~~~///
#include <iostream>
#include <string>
#include <cmath>
#include <map>
#include <tuple>
#include <vector>
#include <array>
#include <set>
#include <algorithm>
using namespace std;
#include <iomanip>
#define str to_string
#define in binary_search
#define ll long long
#define pointer vector<int>::iterator
#define li long int
#define ld long double
#define append push_back
#define add insert
#define nl endl
#define all(x) (x).begin(),(x).end()
#define sum(a) accumulate(all(a),0)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main(){
    fast_io;
    int t,n,m,a,b,c;66
    cin>>t;
    for(int u=1;u<=t;u++){
        n=0;
        cin>>a>>b>>c;
        int arr[a][b];
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<b;i++){
            m=0;
            for(int j=0;j<a;j++){
                m=max(m,arr[j][i]);
            }
            n+=m-arr[c-1][i];
        }
        cout<<"Case #"<<u<<": "<<n<<nl;
    } 
    return 0;
}