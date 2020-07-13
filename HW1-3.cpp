#include <vector>
#include <iostream>

using namespace std;
/*
3. (20 points) Write a templated C++ function called BinarySearch which searches for a target x of
any numeric type T, and test it using a sorted vector of type T. Provide the formulas on the number of
comparisons in terms of n, the length of the vector, when searching for a target in the best and worst
cases. Describe the situations of getting the best and worst cases. What is the classification of the
algorithm in the best and worst cases in terms of the Big-O notation?
*/

template <typename T> int binary_search(vector<T> searched, T value, int top, int bottom) {
    auto middle = (top + bottom) / 2; //arr low high value
    cout << "Value: " << value << endl;
    cout << "Middle: " << middle << endl;
    if (value < searched[middle]) {
        cout << "Lower half" << endl;
        return binary_search(searched, value, middle - 1, bottom);
    }
    else if (value > searched[middle]) {
        cout << "Upper half" << endl;
        return binary_search(searched, value, top, middle + 1);
    }
    else 
        return middle;
}

int main() {
    vector<int> searched;
    searched.push_back(1); //0
    searched.push_back(2);
    searched.push_back(3);
    searched.push_back(4); //3
    searched.push_back(5);
    searched.push_back(7);
    searched.push_back(11); //6
    searched.push_back(14);
    searched.push_back(15);
    searched.push_back(21); //9
    searched.push_back(84);

    

    int result1 = binary_search(searched, 84, 10, 0);
    cout << endl << searched[result1] << endl;
    return 1;
}