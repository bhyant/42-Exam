#ifndef TREE_BAG_HPP
#define TREE_BAG_HPP

#include "bag.hpp"

class tree_bag: virtual public bag {
	protected:
		struct Node {
			int value;
			Node* left;
			Node* right;
		};
		Node* root;

	public:
		tree_bag();
		tree_bag(const tree_bag& other);
		~tree_bag();
		tree_bag& operator=(const tree_bag& other);

		Node* extractTree();
		void setTree(Node*);
		virtual void insert(int);
		virtual void insert(int* array, int size);
		virtual void print() const;
		virtual void clear();

	private:
		static void destroyTree(Node*);
		static void printNode(Node*);
		static Node *copyNode(Node*);
};

#endif
