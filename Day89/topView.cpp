#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;
class Node{
    public:
        int value;
        Node* left;
        Node* right;
        Node(int v){
            value = v;
            left = right = NULL;
        }
};
vector<int> topView(Node* root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    queue<pair<Node*, int>> q;
    q.push(make_pair(root, 0));
    map<int, int> m;
    while(!q.empty()){
        int nodesAtCurrentLevel = q.size();
        while(nodesAtCurrentLevel--){
            pair<Node*, int> p = q.front();
            Node* currNode = p.first;
            int currColumn = p.second;
            q.pop();
            if(m.find(currColumn)==m.end()){
                m[currColumn] = currNode->value;
            }
            if(currNode->left){
                q.push(make_pair(currNode->left, currColumn-1));
            }
            if(currNode->right){
                q.push(make_pair(currNode->right, currColumn+1));
            }
        }
    }
    for(auto it:m){
        ans.push_back(it.second);
    }
    return ans;
}
int main(){
    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);
    vector<int> ans = topView(root);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}