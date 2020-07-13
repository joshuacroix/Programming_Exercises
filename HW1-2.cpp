#include <iostream>
#include <vector>

using namespace std;

/*2. (10 points) Use the STL class vector<int> to write a C++ function that returns true if there are two
elements of the vector for which their product is odd, and returns false otherwise. Provide a formula
on the number of scalar multiplications in terms of n, the size of the vector, to solve the problem in
the best and worst cases. Describe the situations of getting the best and worst cases, give the samples
of the input at each case and check if your formula works. What is the classification of the algorithm
in the best and worst cases in terms of the Big-O notation?*/

bool vector_2odd(vector<int> a) {
   int counter = 0;
   for (int i = 0; i < a.size(); i++) {
       for (int j = 0; j < i; j++) {
           if ((a[i]*a[j])%2 == 1) {
               return true;
           }
       }
    }
    return false;
}

int main() {
    vector<int> a;
    vector<int> b;
    a.push_back(2);
    a.push_back(2);
    a.push_back(2);
    a.push_back(2);
    a.push_back(2);
    a.push_back(3);
    a.push_back(2);
    a.push_back(2);
    a.push_back(2);
    a.push_back(2);
    a.push_back(3);
    a.push_back(2);
    bool flag = 0;
    flag = vector_2odd(a);
    cout << flag << endl;
    return 1;
}
