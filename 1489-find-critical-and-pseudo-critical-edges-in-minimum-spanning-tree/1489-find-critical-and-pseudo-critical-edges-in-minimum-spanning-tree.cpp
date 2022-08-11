struct Edge{
    int idx, to, cost;
    Edge(int idx, int to, int cost) : idx(idx), to(to), cost(cost) {};
	// Operator is inverted to make priority_queue a min heap
    bool operator < (const Edge& other) const { return cost > other.cost; }
};

class Solution {
public:
    vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>>& edges) {
        vector<vector<Edge>> adj(n);
        for(int i = 0; i < edges.size(); i++){
            adj[edges[i][0]].emplace_back(i, edges[i][1], edges[i][2]);
            adj[edges[i][1]].emplace_back(i, edges[i][0], edges[i][2]);
        }
        int mn = prim(adj, -1, 0, -1); // Cost of MST on original graph
        vector<vector<int>> ans(2);
        for(int i = 0; i < edges.size(); i++){
			// Does force-taking this edge increase the MST cost? -> neither critical nor pseudo-critical
            if(prim(adj, i, edges[i][0], -1) > mn) continue;
			// Does ignoring this edge increase the MST cost? -> critical if true, pseudo-critical if false
            if(prim(adj, -1, 0, i) > mn) ans[0].push_back(i);
            else ans[1].push_back(i);
        }
        return ans;
    }
    
    int prim(vector<vector<Edge>>& adj, int startEdgeIdx, int startEdgeFrom, int ignoreEdgeIdx){
        int cnt = 0, total = 0;
        vector<bool> visited(adj.size());
        priority_queue<Edge> pq;
        pq.emplace(-1, startEdgeFrom, 0);
        while(pq.size()){
            auto [idx, to, cost] = pq.top();
            pq.pop();
            if(visited[to]) continue;
            visited[to] = true;
            cnt++;
            total += cost;
            if(cnt == adj.size()) break;
            for(auto edge : adj[to]){
                if(visited[edge.to] || edge.idx == ignoreEdgeIdx) continue;
				// If it's the start edge we assigned, we take the edge upfront and give it the highest priority by making it free
                if(edge.idx == startEdgeIdx){
                    total += edge.cost;
                    edge.cost = 0;
                }
                pq.push(edge);
            }
        }
        return cnt == adj.size() ? total : INT_MAX;
    }
};