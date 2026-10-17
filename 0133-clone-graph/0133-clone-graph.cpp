/*
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
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL)
            return NULL;
        Node *ans=new Node(node->val);
        map<Node*,Node*> vis;
        queue<pair<Node*,Node*>> que;
        vis[node]=ans;
        que.push({ans,node});
        
        while(!que.empty()){
            auto[curr,old]=que.front();
            que.pop();
            for(Node* n:old->neighbors){
                Node *New=new Node();
                if(vis[n] == NULL){
                    vis[n]=New;
                    New->val=n->val;
                    que.push({New,n});
                }
                curr->neighbors.push_back(vis[n]);
            }
        }
        return ans;
    }
};