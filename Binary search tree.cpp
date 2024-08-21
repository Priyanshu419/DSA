// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    
    int data;
    Node* left;
    Node* right;
    
    //constructor;
    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

void inorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}


void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}
Node* insertintoBST(Node* &root , int d){
    // base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    
    if( d > root -> data){
        // insert in right
        root -> right = insertintoBST(root -> right , d);
    }
    else{
        // insert in left
        root -> left = insertintoBST(root -> left , d);
    }
    return root;
    
}
void takeinput(Node* &root){
    int data;
    cin>>data;
    
    while(data != -1){
        root = insertintoBST(root ,data);
        cin>>data;
    }
}

Node* minVal(Node* root){
    // to find min value in a BST(always in extreme left)
    Node* temp = root;
    
    while(temp -> left != NULL){
        temp = temp -> left;
    }
    return temp;
}
Node* maxVal(Node* root){
    // to find max value in a BST(always in extreme right)
    Node* temp = root;
    
    while(temp -> right != NULL){
        temp = temp -> right;
    }
    return temp;
}

Node* deletefromBST(Node* root , int val){
    // base case
    if(root == NULL){
        return root;
    }
    if(root -> data == val){
        // 0 child
        if(root ->left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }
        
        // 1 child
        // left part
        if(root ->left != NULL && root -> right == NULL){
            Node* temp = root ->left;
            delete root;
            return temp;
        }
        // right part
        if(root ->left == NULL && root -> right != NULL){
            Node* temp = root ->right;
            delete root;
            return temp;
        }
        
        // 2 child
        if(root ->left != NULL && root -> right != NULL){
            int mini = minVal(root -> right) -> data;
            root -> data = mini;
            root -> right = deletefromBST(root -> right , mini);
            return root;
        }
        
    }
    
    else if(root -> data > val){
        // left me aajao
        root -> left = deletefromBST(root -> left , val);
        return root;
         
    }
    else{
        // right me aajao
        root -> right = deletefromBST(root -> right , val);
        return root;
    }
};

int main() {
    // 10 8 21 7 27 5 4 3 -1
    Node* root = NULL;
    cout<<"enter data to insert value in BST"<<endl;
    
    takeinput(root);
    cout<<"printing the BST"<<endl;
    levelOrderTraversal(root);
    
    cout << "inorder traversal is:  ";
    // the inorder traversal in a BST is always sorted
    inorder(root); 

    cout << endl << "preorder traversal is:  ";
    preorder(root); 

    cout << endl << "postorder traversal is:  ";
    postorder(root);
    
    cout<<endl<<" min value is : "<<minVal(root) -> data<<endl;
    cout<<" max value is : "<<maxVal(root) -> data<<endl;
    // deletion of a node
    root = deletefromBST(root , 27);
    
   
    cout<<"printing the BST"<<endl;
    levelOrderTraversal(root);
    
    cout << "inorder traversal is:  ";
    // the inorder traversal in a BST is always sorted
    inorder(root); 

    cout << endl << "preorder traversal is:  ";
    preorder(root); 

    cout << endl << "postorder traversal is:  ";
    postorder(root);
    
    cout<<endl<<" min value is : "<<minVal(root) -> data<<endl;
    cout<<" max value is : "<<maxVal(root) -> data<<endl;


    return 0;
}