#include <iostream>
#include <vector>

using namespace std;

/*1. (10 points) Use the STL class vector to write a C++ function that takes two vectors, a and b, of the same size and returns a vector c such that c[i] = a[i] · b[i]. How many scalar multiplications are used to create elements of the vector c of size n? Provide a formula on the number of scalar multiplications in terms of n. What is the classification of this algorithm in terms of the Big-O notation?
*/
vector<int> vector_mult(vector<int> a, vector<int> b) {
    vector<int> c;
    if (a.size() == b.size()) {
        for (int i = 0; i < a.size(); i++) {
            c.push_back(a[i] * b[i]);
        }
    }
    return c;
}

int main() {
    vector<int> a;
    vector<int> b;
    vector<int> c;
    a.push_back(5);
    b.push_back(3);
    a.push_back(12);
    b.push_back(2);
    c = vector_mult(a, b);
    for (int i = 0; i < c.size(); i++) {
        cout << "c[" << i << "]: " << c[i] << endl;
    }
    return 1;
}

