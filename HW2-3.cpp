/* 3. (20 points) Write a C++ recursive function that finds the maximum value in an array (or vector) of integers without using any loops. (a) Test your function using different input arrays. Include the code. (b) Write a recurrence relation that represents your algorithm. (c) Solve the recurrence relation and obtain the running time of the algorithm in Big-O notation. */

#include <iostream>
#include <vector>

using namespace std;

int recursive_max(vector<int> _vector, int selection) {
    if (_vector.size() == 0)
        return -1;
    else if (_vector.size() == 1 || selection == 0)
        return _vector[0];
    else
        return max(_vector[selection-1], recursive_max(_vector, selection-1));
}

int main() {
    vector<int> test_vector;
    test_vector.push_back(2);
    test_vector.push_back(8);
    test_vector.push_back(4);
    test_vector.push_back(5);
    
    cout << "Max element: " << recursive_max(test_vector, test_vector.size());
    return 1;
}