//https://www.hackerrank.com/challenges/30-binary-trees

#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }
        	void levelOrder(Node * root){
    //Write your code here
        
        queue<Node*> que;
        
        
        que.push(root);
        
        while(!que.empty()){
            cout << que.front()->data << " ";
            Node* temp = que.front();
            if(temp->left != NULL) que.push(temp->left);
            if(temp->right != NULL) que.push(temp->right);
            
            que.pop();
        }
  
	}
  };//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
