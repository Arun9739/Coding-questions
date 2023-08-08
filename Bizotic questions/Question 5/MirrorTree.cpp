/* Given a binary tree create a miror tree of it */

#include <iostream>
using namespace std;

struct node{
    int val;
    struct node* left;
    struct node* right;
};

node* createNode(int val){
    auto* newNode = (node*) malloc(sizeof(node));
    newNode -> val = val;
    newNode -> right = nullptr;
    newNode -> left = nullptr;
    return newNode;
}

void inorderTraversal(node* root){
    if(root == nullptr)
        return;
    
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

node* mirrorTree(node* root){
    if(root==nullptr)
        return root;

    node* tempNode = root->left;
    root->left = root->right;
    root->right = tempNode;

    if(root->left)
        mirrorTree(root->left);
    if(root->right)
        mirrorTree(root->right);
    return root;
}

int main(){
    // 7 3 2 16 91 
    node* tree = createNode(7);
    tree->left = createNode(3);
    tree->right = createNode(2);
    tree->left->left = createNode(16);
    tree->right->right = createNode(91);
    
    cout << "Inorder traversal of original tree : " << endl;
    inorderTraversal(tree);
    cout << endl;

    tree = mirrorTree(tree);

    cout << "Inorder tree of mirror tree : " << endl;
    inorderTraversal(tree);
    cout << endl;
}