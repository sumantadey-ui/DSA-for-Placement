// ..........code studio 25.......... 
#include<unordered_map>
// #include<map>
#include<vector>
#include<queue>
#include<list>

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e){
    //Create adj list
    unordered_map<int, list<int> > adj;
    for(int i =0; i<e;i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
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
    for(int i=0; i<v; i++){
        if(indegrees[i] == 0){
            q.push(i);
        }
    }

    // do bfs

    vector<int> ans;
    while(!q.empty()){
        int front = q.front;
        q.pop();

        // ans store
        ans.push_back(front);

        // check neighbour--- neighbour degree update
        for(auto neighbour: adj[front]){
            indegrees[neighbour] --;
            if(indegrees[neighbour] == 0){
                q.push(neighbour);
            }
        }
    }

    return ans;
}
