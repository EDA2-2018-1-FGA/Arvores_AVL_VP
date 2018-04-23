#ifndef RBTREE_H
#define RBTREE_H
#include "node.h"

class RBTree{
private:
	Node* root;
public:
	RBTree();
	void parentChildsColorInversion(Node* parent);
};

#endif