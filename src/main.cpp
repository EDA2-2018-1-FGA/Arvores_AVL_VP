#include <bits/stdc++.h>
#include "rbtree.h"
using namespace std;

int main(){
	RBTree* tree = new RBTree();
	Node* node1 = new Node(10);
	Node* node2 = new Node(5);
	Node* node3 = new Node(23);
	Node* node4 = new Node(12);
	Node* node5 = new Node(2);
	tree->insertNode(tree->getRoot(), node1);
	tree->insertNode(tree->getRoot(), node2);
	tree->insertNode(tree->getRoot(), node3);
	tree->insertNode(tree->getRoot(), node4);
	tree->insertNode(tree->getRoot(), node5);
	tree->inOrder(tree->getRoot());

	return 0;
}
