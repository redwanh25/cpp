#include <iostream>
#include <vector>
using namespace std;

vector < pair <int, int> > adj;
int node[1000];

/// disjoint set...

int Find(int z)
{
    if(node[z] == 0){
        return z;
    }
    return Find(node[z]);
}

void Union(int a, int b)
{
    int x = Find(a);
    int y = Find(b);
    node[x] = y;
}

bool iscycle()
{
    for(int i = 0; i < adj.size(); i++){
        int a = adj[i].first;
        int b = adj[i].second;
        if(Find(a) == Find(b)){
            return true;
        }
        else{
            Union(a, b);
        }
    }
    return false;
}

int main()
{
    int nd, eg, a, b;
    cin >> nd >> eg;
    for(int i = 0; i < eg; i++){
        cin >> a >> b;
        adj.push_back(make_pair(a, b));
    }

    if(iscycle()){
        cout << "cycle ase..." << endl;
    }
    else{
        cout << "cycle nai..." << endl;
    }
    return 0;
}

/*
cycle ase.
4 4
1 2
2 3
3 4
4 2

cycle nai.
4 3
1 2
2 3
3 4

*/
