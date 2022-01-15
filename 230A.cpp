#include<bits/stdc++.h>
using namespace std;

#define endl       	"\n"
#define LL          	long long
#define READ(x)     freopen(x,"r",stdin)
#define WRITE(x)    freopen(x,"w",stdout)
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          	push_back
#define mem(x,y)    memset(x,y,sizeof x )
#define ch          	printf("Came Here!!!!!!!!!!!!!!!\n")
#define deb(x)      	cerr<<#x<<" :: "<<x<<" "
#define dnl         	cerr<<endl
#define FOR(i,n)    	for(int i=0;i<n;i++)
#define lnd         	(2*idx),(b),( (b+e) /2 )
#define rnd         	((2*idx)+1),(((b+e)/2)+1),(e)
#define popcount    __builtin_popcount

int main(){
    BOOST;
	int s, n;
	cin >> s >> n;
	int loses = 0;
	for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if(s < x) {
            loses++;
        }
        s = s + y;
    }
    if(loses > 0) {
        cout << "NO" << endl;
    }else {
        cout << "YES" <<endl;
    }

}
