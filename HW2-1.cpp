#include <iostream>
#include <list>
#include <iterator>
#include <stdexcept>
#include <string>
using namespace std;

template <typename T>
list<T> and_list(list<T> list1, list<T> list2) {
    list<T> results_list;
    typename list<T>::iterator l1_itr;
    l1_itr = list1.begin();
    typename list<T>::iterator l2_itr;
    l2_itr = list2.begin();

    while (l1_itr != list1.end() && l2_itr != list2.end()) {
        if (*l1_itr == *l2_itr) { //Matching
            results_list.push_back(*l1_itr);
            l1_itr++;
            l2_itr++;
        }
        else if (*l1_itr < *l2_itr) {
            l1_itr++;
        }
        else if (*l1_itr > *l2_itr) {
            l2_itr++;
        }
    }
    return results_list;
}

int main() {
    list<int> list1;
    list<int> list2;
    for (int i = 0; i < 10; i++) {
        list1.push_back(i*2);
        list2.push_back(i);
    }
    list<int> results_list;
    results_list = and_list(list1, list2);
    cout << "Results: ";
    while (results_list.size() > 0) {
        cout << results_list.front() << " ";
        results_list.pop_front();
    }
    cout << endl;
    return 1;
}