#include<bits/stdc++.h>
using namespace std;
struct DSU{
    vector<int>par;
    DSU(int n_components){
        par.resize(n_components+1,-1);
    }
    int find_leader(int x){
        return par[x]<0?x:(par[x]=find_leader(par[x]));
    }
    void merge(int x,int y){
        if((x=find_leader(x))==(y=find_leader(y))){return ;}
        if(par[y]<par[x]){
            swap(x,y);
        }
        par[x]+=par[y];
        par[y]=x;
    }
};
class Graph{
    /*public:
    void BFS(vector<vector<int>>&l){
        int n=l.size();
        queue<int>q;
        q.push(0);
        vector<int>dist(n,-1);
        dist[0]=0;
        while(q.size()!=0){
            int curr=q.front();
            q.pop();
            for(int i=0;i<l[curr].size();i++){
                int nbr=l[curr][i];
                if(dist[nbr]==0){
                    dist[nbr]=dist[curr]+1;
                    q.push(nbr);
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<dist[i]<<" ";
        }
    }*/
    /*public:
    void DFS(vector<vector<int>>&adj,int root,int parent=-1){
        cout<<root<<" ";
        for(int i=0;i<adj[root].size();i++){
            int nbr=adj[root][i];
            if(nbr!=parent){
                DFS(adj,adj[root][i],root);
            }
        }
    }*/
    /*public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        vector<vector<pair<int,int>>>edge(V);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int w=edges[i][2];
            edge[u].push_back({w,v});
            edge[v].push_back({w,u});
        }
        vector<int>dist(V,INT_MAX);
        set<pair<int,int>>q;
        dist[src]=0;
        q.insert({0,src});
        while(q.size()!=0){
            int d=q.begin()->first;
            int v=q.begin()->second;
            q.erase(q.begin());
            for(int i=0;i<edge[v].size();i++){
                int v2=edge[v][i].second;
                int w=edge[v][i].first;
                if(dist[v2]>dist[v]+w){
                    if(dist[v2]!=INT_MAX){
                        q.erase({dist[v2],v2});
                    }
                    dist[v2]=dist[v]+w;
                    q.insert({dist[v2],v2});
                }
            }
        }
        return dist;
    }*/
    public:
    void BFS(vector<vector<int>>&adj,int n,int src){
        vector<int>dist(n+1,-1);
        dist[src]=0;
        queue<int>q;
        q.push(src);
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            for(int i=0;i<adj[curr].size();i++){
                int nbr=adj[curr][i];
                if(dist[nbr]==-1){
                    dist[nbr]=dist[curr]+1;
                    q.push(nbr);
                }
            }
        }
        for(int i=1;i<=n;i++){
            cout<<dist[i]<<" ";
        }
    }
};
int main(){
    Graph s;
    vector<vector<int>>adj={{},{2,3},{1,4,5},{1},{2},{2}};
    s.BFS(adj,5,1);
    /*vector<vector<int>>edges={{0, 1, 4}, {0, 2, 8}, {1, 4, 6}, {2, 3, 2}, {3, 4, 10}};
    vector<int>ans=s.dijkstra(5,edges,0);
    for(int i:ans){
        cout<<i<<" ";
    }*/
    /*Graph g;
    int n,e;
    cin>>n>>e;
    vector<vector<int>>graph(n);
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }*/
    
    // g.BFS(graph);
    // DSU dsu(3);
    // cout<<dsu.find_leader(1)<<endl;
    // dsu.merge(1,2);
    // cout<<dsu.par[1]<<"\n"<<dsu.par[2]<<endl;
    /*vector<vector<int>>v={{3,2,1},{2,1,0}};
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        for(int j:v[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }*/
}