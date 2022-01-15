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


// Grid direction array [4]
int X[4]={0,0,-1,1};
int Y[4]={1,-1,0,0};


int main(){
    BOOST;
	int testCases;
	cin >> testCases;
	int faces = 0;
	for(int i = 0; i < testCases; i++) {
        string hedron;
        cin >> hedron;
        if(hedron == "Tetrahedron")
        {
            faces = faces + 4;
        }
        if(hedron == "Cube")
        {
            faces = faces + 6;
        }
        if(hedron == "Octahedron")
        {
            faces = faces + 8;
        }
        if(hedron == "Dodecahedron")
        {
            faces = faces + 12;
        }
        if(hedron == "Icosahedron")
        {
            faces = faces + 20;
        }
	}
	cout << faces << endl;
}
