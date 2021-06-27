#include<bits/stdc++.h>
using namespace std;
void DFSUtil (int i, vector <int> g[], int N, bool vis[], vector <int> &res)
{
    if (vis[i]) return;
    vis[i] = true;
    res.push_back (i);
    
    for (int j : g[i])
    {
        if (!vis[j]) DFSUtil (j, g, N, vis, res);
    }
}

vector <int> dfs(vector<int> g[], int N)
{
    bool vis[N];
    memset (vis, false, sizeof (vis));
    
    vector <int> res;
    for (int i = 0;i < N; i++)
    {
        if (!vis[i])
        {
            DFSUtil (i, g, N, vis, res);
        }
    }
    
    return res;
}




int main()
{
    int T;
    cin>>T;
    while(T--)
    {

        int N, E;
        cin>>N>>E;
        
        vector<int> g[N];
        bool vis[N];
        
        memset(vis, false, sizeof(vis));
        
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector <int> res = dfs(g, N);
        for (int i = 0; i < res.size (); i++)
            cout << res[i] << " ";
        cout<<endl;

    }
}
