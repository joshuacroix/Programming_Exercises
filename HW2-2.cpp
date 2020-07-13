#include <iostream>
#include <cstdlib>

using namespace std;

/* 2. (20 points) Write a C++ recursive function that counts the number of nodes in a singly linked list. (a) Test your function using different singly linked lists. Include your code. (b) Write a recurrence relation that represents your algorithm. (c) Solve the recurrence relation using the iterating or recursive tree method to obtain the running time of the algorithm in Big-O notation.
*/
struct Node {
    int value;
    struct Node *next;
};

int recursive_count(Node *current) {
    if (current == NULL) 
        return 0;
    else 
        return 1 + recursive_count(current->next);
}

int main() {
    Node* first = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourth = NULL;
    first = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    cout << "Number of nodes: " << recursive_count(first) << endl;
    return 1;
   
}