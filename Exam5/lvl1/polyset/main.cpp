#include "searchable_tree_bag.hpp"
#include "searchable_array_bag.hpp"
#include "set.hpp"
#include <iostream>
#include <climits>

void testBasicOperations(searchable_bag* bag) {
    std::cout << "\n=== Testing Basic Operations ===" << std::endl;

    // Test single insertions
    bag->insert(1);
    bag->insert(2);
    bag->insert(3);
    std::cout << "After inserting 1,2,3: ";
    bag->print();

    // Test array insertion
    int arr[] = {4, 5, 6};
    bag->insert(arr, 3);
    std::cout << "After inserting array {4,5,6}: ";
    bag->print();

    // Test search
    std::cout << "Has 3? " << (bag->has(3) ? "yes" : "no") << std::endl;
    std::cout << "Has 7? " << (bag->has(7) ? "yes" : "no") << std::endl;

    // Test clear
    std::cout << "Before clear: ";
    bag->print();
    bag->clear();
    std::cout << "After clear: ";
    bag->print();
}

void testSetOperations(searchable_bag* bag) {
    std::cout << "\n=== Testing Set Operations ===" << std::endl;

    set s(*bag);

    // Test duplicate insertions
    s.insert(1);
    s.insert(1);
    s.insert(1);
    std::cout << "After inserting 1 three times: ";
    s.print();

    // Test array with duplicates
    int arr[] = {1, 2, 2, 3, 3, 3};
    s.insert(arr, 6);
    std::cout << "After inserting array with duplicates: ";
    s.print();

    // Test search
    std::cout << "Has 2? " << (s.has(2) ? "yes" : "no") << std::endl;
    std::cout << "Has 4? " << (s.has(4) ? "yes" : "no") << std::endl;

    // Test clear
    std::cout << "Before clear: ";
    s.print();
    s.clear();
    std::cout << "After clear: ";
    s.print();
}

void testEdgeCases(searchable_bag* bag) {
    std::cout << "\n=== Testing Edge Cases ===" << std::endl;

    set s(*bag);
    // Test empty array insertion (use a small placeholder array)
    int empty_arr[1] = {0};
    std::cout << "Before clear: ";
    s.print();
    s.insert(empty_arr, 0);
    std::cout << "After inserting empty array: ";
    s.print();

    // Test large numbers
    s.insert(INT_MAX);
    s.insert(INT_MIN);
    std::cout << "After inserting INT_MAX and INT_MIN: ";
    s.print();

    // Test searching in empty set
    s.clear();
    std::cout << "Has 0 in empty set? " << (s.has(0) ? "yes" : "no") << std::endl;
}

void testCopyOperations() {
    std::cout << "\n=== Testing Copy Operations ===" << std::endl;

    // Test ArrayBag copy
    searchable_array_bag* arr1 = new searchable_array_bag();
    arr1->insert(1);
    arr1->insert(2);

    searchable_array_bag* arr2 = new searchable_array_bag(*arr1);
    std::cout << "Original array: ";
    arr1->print();
    std::cout << "Copied array: ";
    arr2->print();

    // Test TreeBag copy
    searchable_tree_bag* tree1 = new searchable_tree_bag();
    tree1->insert(1);
    tree1->insert(2);

    searchable_tree_bag* tree2 = new searchable_tree_bag(*tree1);
    std::cout << "Original tree: ";
    tree1->print();
    std::cout << "Copied tree: ";
    tree2->print();

    delete arr1;
    delete arr2;
    delete tree1;
    delete tree2;
}

int main() {
    searchable_array_bag* arrayBag = new searchable_array_bag();
    searchable_tree_bag* treeBag = new searchable_tree_bag();

    std::cout << "Testing Array Implementation:" << std::endl;
    testBasicOperations(arrayBag);
    testSetOperations(arrayBag);
    testEdgeCases(arrayBag);

    std::cout << "\nTesting Tree Implementation:" << std::endl;
    testBasicOperations(treeBag);
    testSetOperations(treeBag);
    testEdgeCases(treeBag);

    testCopyOperations();

    // Memory cleanup
    delete arrayBag;
    delete treeBag;

    std::cout << "\nAll tests completed successfully!" << std::endl;
    return 0;
}
