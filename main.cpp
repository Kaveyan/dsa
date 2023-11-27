#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
}; // Added semicolon here

class Linkedlist {
public:
    Node* head;

    Linkedlist() {
        head = NULL; // Fixed typo: headt to head
    }

    void insertattail(int val) {
        Node* new_node = new Node(val);
        if (head == NULL) {
            head = new_node;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
    }
}; // Added semicolon here

void detailsalternativenode(Node* head) { // Fixed typo: %head to head
    Node* curr_node = head;
    while (curr_node != NULL && curr_node->next != NULL) {
        Node* temp = curr_node->next;
        curr_node->next = curr_node->next->next;
        delete temp; // Changed free to delete
        curr_node = curr_node->next;
    }
}

void detectdupilicateNode(Node* head) { // Fixed typo: Node8 to Node
    Node* cur_node = head;
    while (cur_node) {
        while (cur_node->next && cur_node->val == cur_node->next->val) {
            Node* temp = cur_node->next;
            cur_node->next = cur_node->next->next;
            delete temp; // Changed free to delete
        }
        cur_node = cur_node->next;
    }
}

int main() {
    Node* head = NULL;
    Linkedlist ll;
    ll.insertattail(1); 
    ll.insertattail(5); 
    ll.insertattail(6); 
    ll.insertattail(9); 
    ll.display();
    cout<<endl;
     Linkedlist l;
    l.insertattail(1); 
    l.insertattail(5); 
    l.insertattail(6); 
    l.insertattail(9); 
    l.display();

    return 0;
}
