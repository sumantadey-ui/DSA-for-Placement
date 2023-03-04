// ........ Codestudio 10 .....
/*
// using BFS
#include<unordered_map>
#include<map>
#include<list>


bool isCyclicBFS(int scr,unordered_map<int, bool>& visited, unordered_map<int, list<int>>& adjList ){

    unordered_map<int, int> parent;

    parant[scr] = -1;
    visited[scr] = 1;
    queue<int> q;
    q.push(src);

    while(!q.empty()){
        int front = q.front();
        q.pop();

        for(auto neighbour: adjList[front]){
            if(visited[neighbour] == true && neighbour != parent[front]){
                return true;
            }
            else if(! visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] = true;
                parent[neighbour] = front;
            }
        }
    }
    return false;

}



string cycleDetection (vector<vector<int>> & edges, int n, int m){
    // create adjacency list
    unordered_map<int, list<int>> adjList;

    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // to handle disconnected componant

    unordered_map<int, bool> visited;
    for(int i =0; i<n; i++){
        if(! visited[i]){
            bool ans = isCyclicBFS(i, visited, adjList);
            if(ans == 1){
                return "Yes";
            }
        }
    }
    return "No";
}

*/

// using DFS
#include<unordered_map>
#include<map>
#include<list>

bool isCyclicDFS(int node, int parent, unordered_map<int, bool>& visited, unordered_map<int, list<int>>& adjList){


    visited[node] = true;
    
    for(auto neighbour: adjList[node]){
        if(!visited[neighbour]){
            bool cycledetected = isCyclicDFS(neighbour, node, visited, adjList);
            if(cycledetected){
                return true;
            }
            else if(neighbour != parent){
                // cycle present
                return true;
            }
        }
    }
    return false;
}


string cycleDetection (vector<vector<int>> & edges, int n, int m){
    // create adjacency list
    unordered_map<int, list<int>> adjList;

    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // to handle disconnected componant

    unordered_map<int, bool> visited;
    for(int i =0; i<n; i++){
        if(! visited[i]){
            bool ans = isCyclicDFS(i,-1, visited, adjList);
            if(ans == 1){
                return "Yes";
            }
        }
    }
    return "No";
}