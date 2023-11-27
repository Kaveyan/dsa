#include<iostream>
using namespace std; // Corrected typo: sdt to std

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};

void insertathead(Node* &head, int val) {
    Node* new_node = new Node(val); // Added semicolon
    new_node->next = head;
    head = new_node;
}

void insertattail(Node* &head, int val) {
    Node* new_node = new Node(val); // Added semicolon
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node; // Added semicolon
}

void insertatposition(Node* &head, int val, int pos) {
    if (pos == 0) {
        insertathead(head, val);
        return;
    }

    Node* new_node = new Node(val); // Added semicolon
    Node* temp = head;
    int current_pos = 0;
    while (current_pos != pos - 1) {
        temp = temp->next;
        current_pos++;
    }

    new_node->next = temp->next; // Fixed typo: = to ->
    temp->next = new_node;
}

void updateatposition(Node* &head, int k, int val) {
    Node* temp = head;
    int current_pos = 0;
    while (current_pos != k) {
        temp = temp->next;
        current_pos++;
    }
    temp->val = val; // Added semicolon
}

void deletenodehead(Node* &head) {
    Node* temp = head;
    head = head->next;
    delete temp; // Changed free to delete
}

void deleteattail(Node* &head) {
    Node* second_last = head;
    while (second_last->next->next != NULL) {
        second_last = second_last->next;
    }

    Node* temp = second_last->next;
    second_last->next = NULL;
    delete temp; // Changed free to delete
}

void delectionatposition(Node* &head, int pos) {
    if (pos == 0) {
        deletenodehead(head);
        return;
    }
    int curr_pos = 0;
    Node* prev = head;
    while (curr_pos != pos - 1) {
        prev = prev->next;
        curr_pos++;
    }

    Node* temp = prev->next;
    prev->next = prev->next->next;
    delete temp; // Changed free to delete
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl; // Added double quotes around NULL
}

int main() {
    Node* head = NULL;
    insertathead(head, 2);
    display(head);
    insertathead(head, 1);
    display(head);
    insertattail(head, 5); // Added semicolon
    updateatposition(head, 2, 5);
    display(head);

    return 0;
}
















