#include "tree_bag.hpp"
#include <iostream>

tree_bag::tree_bag() : root(NULL) {}

tree_bag::tree_bag(const tree_bag& other) : root(copyNode(other.root)) {}

tree_bag::~tree_bag() {
clear();
}

tree_bag& tree_bag::operator=(const tree_bag& other) {
if (this != &other) {
clear();
root = copyNode(other.root);
}
return *this;
}

tree_bag::Node* tree_bag::extractTree() {
Node* temp = root;
root = NULL;
return temp;
}

void tree_bag::setTree(Node* newRoot) {
clear();
root = newRoot;
}

void tree_bag::insert(int value) {
    Node** current = &root;
    while (*current) {
        if (value < (*current)->value) {
            current = &((*current)->left);
        } else {
            current = &((*current)->right);
        }
    }
    *current = new Node();
    (*current)->value = value;
    (*current)->left = NULL;
    (*current)->right = NULL;
}

void tree_bag::insert(int* array, int size) {
for (int i = 0; i < size; ++i) {
insert(array[i]);
}
}

void tree_bag::print() const {
printNode(root);
std::cout << std::endl;
}

void tree_bag::clear() {
destroyTree(root);
root = NULL;
}

void tree_bag::destroyTree(Node* node) {
if (node) {
destroyTree(node->left);
destroyTree(node->right);
delete node;
}
}

void tree_bag::printNode(Node* node) {
if (node) {
printNode(node->left);
std::cout << node->value << " ";
printNode(node->right);
}
}

tree_bag::Node* tree_bag::copyNode(Node* node) {
    if (!node) return NULL;
    Node* newNode = new Node();
    newNode->value = node->value;
    newNode->left = copyNode(node->left);
    newNode->right = copyNode(node->right);
    return newNode;
}
