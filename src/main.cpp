#include <bits/stdc++.h>
#include "node.h"
#include "rbtree.h"
using namespace std;

int main(){
	Node* nodeP = new Node(10);
	//Node* nodeC1 = new Node(12);
	Node* nodeC2 = new Node(5);

	nodeP->setLeft(nodeC2);
	//nodeP->setRight(nodeC1);
	//nodeP->setParent(nullptr);
	//nodeC1->setParent(nodeP);
	nodeC2->setParent(nodeP);

	nodeP->changeColor();

	nodeP->printNode();



	nodeP->rotateRight()->printNode();

	return 0;
}
