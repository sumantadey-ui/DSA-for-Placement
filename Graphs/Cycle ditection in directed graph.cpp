// ................Code Studio 5 ...... 

#include<unordered_map>
#include<map>
#include<list>

// Using DFS

bool checkCycleDFs(int node,unordered_map<int, bool> &visited,unordered_map<int, bool> &dfsVisited,unordered_map<int, list<int> > &adj){
    visited[node]=true;
    dfsVisited[node]=true;

    for(auto neighbour: adj[node]){
        if(!visited[neighbour]){
            bool cycleDetected = checkCycleDFs(neighbour,visited,dfsVisited,adj);
            if(cycleDetected){
                return true;
            }

        }
        else if(dfsVisited[neighbour]){
            return true;
        }
    }
    dfsVisited[node] = false;
    return false;
}


int detectCycleInDirectedGraph(int n, vector<pair <int, int>> &edges){
   // create adj list
   unordered_map<int, list<int> > adj;
   for(int i=0; i< edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
    }

    // call dfs for all componants
    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsVisited;

    for(int i=0; i<n;i++){
        if(! visited[i]){
            bool cycleFound = checkCycleDFs(i, visited, dfsVisited, adj);
            if(cycleFound){
                return true;
            } 
        }
    }
    return false;
}


// Using BFS  

#include<unordered_map>
#include<map>
#include<list>


int detectCycleInDirectedGraph(int n, vector<pair <int, int>> &edges){
    //Create adj list
    unordered_map<int, list<int> > adj;
    for(int i =0; i<edges.size();i++){
        int u = edges[i].first - 1;
        int v = edges[i].second - 1;
        adj[u].push_back(n);
    }

    //find all indegrees
    vector<int> indegrees(v);
    for(auto i: adj){
        for(auto j: i.second){
            indegrees[j] ++;
        }
    }

    // push 0 indegrees

    queue<int> q;
    for(int i=0; i<n; i++){
        if(indegrees[i] == 0){
            q.push(i);
        }
    }

    // do bfs

    int cnt =0;
    while(!q.empty()){
        int front = q.front;
        q.pop();

        // increment cnt
        cnt ++;

        // check neighbour--- neighbour degree update
        for(auto neighbour: adj[front]){
            indegrees[neighbour] --;
            if(indegrees[neighbour] == 0){
                q.push(neighbour);
            }
        }
    }

    if(cnt == n){
        return false;
    }

    else{
        return true;
    }
    
}
