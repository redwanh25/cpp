#include<bits/stdc++.h>

using namespace std;

#define MAX             100005
#define MOD             1000003
#define eps             1e-6
int fx[] =              {1,-1,0,0};
int fy[] =              {0,0,1,-1};

#define FastRead        ios_base::sync_with_stdio(0);cin.tie(0);
#define fRead           freopen("in.txt","r",stdin);
#define fWrite          freopen ("out.txt","w",stdout);

#define ll              long long
#define ull             unsigned long long
#define ff              first
#define ss              second
#define pb              push_back
#define PI              acos(-1.0)
#define mk              make_pair
#define pii             pair<int,int>
#define pll             pair<LL,LL>
#define vi              vector <int>
#define vl              vector <LL>
#define vp              vector<pii>
#define all(a)          a.begin(),a.end()

#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))

#define FOR(i,a,b)      for(int i=a;i<=b;i++)
#define ROF(i,a,b)      for(int i=a;i>=b;i--)
#define REP(i,b)        for(int i=0;i<b;i++)

#define MEM(a,x)        memset(a,x,sizeof(a))
#define ABS(x)          ((x)<0?-(x):(x))
#define SORT(v)         sort(v.begin(),v.end())
#define REV(v)          reverse(v.begin(),v.end())

/// #define NUM 1000005bool flag[NUM];vector <int> prime;inline void sieve(){flag[1]=true;for(int i=4; i<NUM; i+=2){flag[i]=true;}for(int i=3; i*i<=NUM; i+=2){if(!flag[i]){for(int j=i*i; j<NUM; j+=2*i){flag[j]=true;}}}prime.pb(2);for(int i=3; i<NUM; i+=2){if(!flag[i]){prime.pb(i);}}return;}

/// inline int NOD(ll n){int div=1;for(int i=0; prime[i]*prime[i]<=n; i++){if(n%prime[i]==0){int cnt=0;while(n%prime[i]==0){n/=prime[i];cnt++;}div*=(cnt+1);}}if(n>1){div*=2;}return div;}

/// inline int BigMod(LL B,LL P,LL M){LL R=1;while(P>0){if(P & 1) R=(R*B)%M;P/=2;B=(B*B)%M;}return R%M;}

/// inline void build(int L,int R,int pos){if(L==R){tree[pos]=arr[L];return;}int mid=(L+R)/2;build(L,mid,pos*2+1);build(mid+1,R,pos*2+2);tree[pos]=min(tree[pos*2+1],tree[pos*2+2]);return;}

/// inline int query(int ql,int qr,int L,int R,int pos){if(ql>R or qr<L) return MAX;else if(ql<=L and qr>=R) return tree[pos];int mid=(L+R)/2;int p=query(ql,qr,L,mid,2*pos+1);int q=query(ql,qr,mid+1,R,2*pos+2);return min(p,q);}

/// inline void bfs(int s){MEM(vis,0);vis[s]=1;queue<int>Q;Q.push(s);while(!Q.empty()){int x=Q.front();Q.pop();REP(i,V[x].size()){if(!vis[V[x][i]]){vis[V[x][i]]=1;Q.push(V[x][i]);}}}return;}

/// int cell[100][100]; int d[100][100],vis[100][100];int row,col;inline void bfs(int sx,int sy){ MEM(vis,0);vis[sx][sy]=1;queue<pii>q; q.push(pii(sx,sy));while(!q.empty()){pii top=q.front();q.pop();for(int k=0; k<4; k++){int tx=top.ff+fx[k];int ty=top.ss+fy[k]; if(tx>=0 and tx<row and ty>=0 and ty<col and cell[tx][ty]!=-1 and vis[tx][ty]==0){vis[tx][ty]=1;d[tx][ty]=d[top.ff][top.ss]+1;q.push(pii(tx,ty)); }}}return;}

/// inline void bi_dfs(int s,int c){if(vis[s]) return;vis[s]=1;color[s]=c;REP(i,V[s].size()) dfs(V[s][i],1-c);return;}


//// ***************************************************** TEMPLETE ***************************************************** ////

