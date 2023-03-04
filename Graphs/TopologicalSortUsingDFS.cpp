// .... Code Studio 25 .......... 


#include<unordered_map>
// #include<map>
#include<vector>
#include<stack>
#include<list>

void topoSort(int node, vector<bool> &visited, stack<int>&s, unordered_map<int, list<int> > &adj){
    visited[node] = 1;
    for(auto neighbour: adj[node]){
        if(!visited[neighbour]){
            topoSort(neighbour, visited, s, adj);
        }
    }
    //imp
    s.push(node);
}


vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e){
    
    unordered_map<int, list<int> > adj;
    for(int i=0; i< edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
    }

    // call dfs topological sort util function for all componenet 
    vector<bool> visited(v);
    stack<int>s;
    for(int i =0; i< v; i++){
        if(! visited[i]){
            topoSort(i, visited, s, adj);
        }
    }
    vector<int> ans;
    while (!s.empty())
    {
        ans.pu((s.top());
        s.pop();    
    }
    return ans;
    
}