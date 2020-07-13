#include <iostream>

using namespace std;

int counter = 0; 

struct Node {
    int value;
    struct Node* left;
    struct Node* right;
};

int node_count(Node* current) {
    if (current == NULL)
        return 0;
    else if (current->left != NULL && current->right != NULL) {
        counter++;
    }  
    node_count(current->left);
    node_count(current->right);
    return 1; 
}

struct Node* add_node(int _val) {
    Node* new_node = new Node;
    new_node->value = _val;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
    }

int main() {
    Node* header = add_node(5);
    header->left = add_node(3);
    header->right = add_node(4);
    header->left->left = add_node(7);
    header->left->right = add_node(6);
    header->left->left->left = add_node(12);
    header->left->left->right = add_node(18);
    node_count(header);
    cout << "Counter: " << counter << endl;
}