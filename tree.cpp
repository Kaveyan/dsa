#include<iostream>
using namespace std;
#include<queue>

class node {
public:
    int data;
    node* left;
    node* right;
    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* build(node* root) {
    int data;
    cout << "Enter the data: ";
    cin >> data;
    if (data == -1) {
        return NULL;
    }
    root = new node(data);
    cout << "Enter the data to be returned in left: "<<data<<endl;
    root->left = build(root->left);
    cout << "Enter the data to be returned in right: "<<data<<endl;
    root->right = build(root->right);
    return root;
}

void levelordertravel(node* root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        cout<<temp->data;
        q.pop();

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }

}



int main() {
    node* root = NULL;
    root = build(root);
    cout<<"build completed";
    levelordertravel(root);

    return 0;
}