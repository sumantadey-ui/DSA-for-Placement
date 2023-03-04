// ............ Code Studio ..........

void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int> > &adjList , vector<int> &componant){

    // store ans
    componanat.push_back(node);
    //mark visited
    visited[node] = true;

    //recursive call for every connected node
    for(auto i: adjList(node)){
        if(!visited[i]){
            dfs(i, visited, adjList, componant);
        }
    }

}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges){
    //prepere adj list
    unordered_map<int, list<int> > adjList;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int> > ans;
    unordered_map<int, bool> visited;

    // for all nodes call DFS, if not visited

    for(int i=0; i<v; i++){
        if(! visited[i]){
            vector<int> componant;
            dfs(i, visited, adjList, componant);
            ans.push_back(component);
        }
    }
}