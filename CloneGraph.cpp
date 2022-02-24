//Explanation:
// The steps are simple.

// Check if root is NULL. return if yes
// // Visited hashmap is needed to prevent cycles. Example, consider a undirected rectangle shape graph from A->B->C->D->A. If we dont' keep visited, it will keep on going.
// If no, clone the node and add the entry pair to hashmap as visited[node] = clonedNode;
// Iterate over neighbours and do dfs for each. While we are looping over this neighbour list, we can also fill neighbours of cloned node with the result from recursive calls.
// Return clonedNode at each recursive call


// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};


#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    unordered_map<Node*, Node*> visited;
public:
    Node* cloneGraph(Node* node) {
        if(node == NULL)
            return node;
        if(visited[node])
            return visited[node];
        
        Node* cloned = new Node(node->val);
        visited[node] = cloned;
        
        for(auto nei: node->neighbors){
            cloned->neighbors.push_back(cloneGraph(nei));
        }
        return cloned;
        
    }
};