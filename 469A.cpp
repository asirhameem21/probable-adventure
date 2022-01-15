#include<bits/stdc++.h>
using namespace std;

#define endl       	    "\n"
#define LL          	long long
#define READ(x)         freopen(x,"r",stdin)
#define WRITE(x)        freopen(x,"w",stdout)
#define BOOST           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          	push_back
#define mem(x,y)        memset(x,y,sizeof x )
#define ch          	printf("Came Here!!!!!!!!!!!!!!!\n")
#define deb(x)      	cerr<<#x<<" :: "<<x<<" "
#define dnl         	cerr<<endl
#define FOR(i,n)    	for(int i=0;i<n;i++)
#define lnd         	(2*idx),(b),( (b+e) /2 )
#define rnd         	((2*idx)+1),(((b+e)/2)+1),(e)
#define popcount        __builtin_popcount


// Grid direction array [4]
int X[4]={0,0,-1,1};
int Y[4]={1,-1,0,0};


int main(){
    BOOST;
	int n, p, q;
	set<int> levels;
	cin >> n >> p;
	for(int i = 0; i < p; i++)
    {
        int a;
        cin >> a;
        levels.insert(a);
    }
    cin >> q;
    for(int j = 0; j < q; j++)
    {
        int b;
        cin >> b;
        levels.insert(b);
    }
    int notFound = 0;
    for(int k = 1; k <= n; k++)
    {
        if(levels.count(k))
        {
            continue;
        }else {
            notFound++;
        }
    }

    if(notFound == 0)
    {
        cout << "I become the guy." <<endl;
    }
    else {
        cout << "Oh, my keyboard!" <<endl;
    }


    return 0;
}
