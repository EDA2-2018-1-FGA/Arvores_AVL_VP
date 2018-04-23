#include <bits/stdc++.h>
#include "node.h"
#include "rbtree.h"
using namespace std;

RBTree::RBTree(){
	root = nullptr;
}

void
RBTree::parentChildsColorInversion(Node* parent){
	parent->changeColor();
	if(parent->getLeft() != nullptr)
		parent->getLeft()->changeColor();
	if(parent->getRight() != nullptr)
		parent->getRight()->changeColor();
}