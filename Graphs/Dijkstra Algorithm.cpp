// .................. Codestudio......... 


#include<unordered_map>
#include<list>
#include<set>

vector<int> dijkstra(vector<vector<int>> &vec, int vertices,int edges, int source){
    // create adj list
    unordered_map<int, list<pair<int, int> > > adj;
    for(int i=0; i<edges; i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));


    }

    // creation of distance with infinite value incially
    vector<int> distance(vertices);
    for(int i=0; i< vertices; i++){
        distance[i] =INT_MAX;
    }

    // creation of set on the basis of (distance, node)
    set<pair<int,int> > st;

    // initialse distance and set with source node
    distance[source] = 0;
    st.insert(make_pair(0, source));



    while(! st.empty()){

        // fetch top record
        auto top = *(st.begin());
        int nodeDist = top.first;
        int topNode = top.second;

        //remove top record

        st.erase(st.begin());

        // travers on neighbour
        for(auto neighbour: adj[topNode]){
            if( nodeDist + neighbour.second() < distance[neighbour.first]){

                auto record = st.find[make_pair(distance[neighbour.first], neighbour.first)];
                // if record found then erase it
                if(record ! = st.end()){
                    st.erase(record);
                }

                // distance update 
                distance[neighbour.first] = nodeDist + neighbour.second;

                // record push in set
                st.insert(make_pair(distance[neighbour.first], neighbour.first);)
            }
        }

    }
    
    return distance;
}