#include <bits/stdc++.h>
#include "node.h"
using namespace std;

Node::Node(int key){
	this->key = key;
	left = right = parent = nullptr;
	this->color = RED;
}

int
Node::getKey(){
	if(this == nullptr)
		return 0;
	return this->key;
}

int
Node::getColor(Node* node){
	if(node == nullptr)
		return BLACK;
	else
		return node->color;
}

void
Node::setColor(int color){
	this->color = color;
}

Node*
Node::getLeft(){
	return left;
}

void
Node::setLeft(Node* node){
	left = node;
}

Node*
Node::getRight(){
	return right;
}

void
Node::setRight(Node* node){
	right = node;
}

Node*
Node::getParent(){
	return parent;
}

void
Node::setParent(Node* node){
	parent = node;
}

void
Node::changeColor(){
	this->color = !this->color;
}

void
Node::printNode(){
	cout << "Pai: " << this->getKey() << " Cor: " << Node::getColor(this) << endl;
	cout << "Filho esq: " << this->getLeft()->getKey() << " Cor: " <<  Node::getColor(this->getLeft()) << endl;
	cout << "Filho dir: " << this->getRight()->getKey() << " Cor: " << Node::getColor(this->getRight()) << endl;
}

void
Node::swapSelfAndChildsColor(){
	this->changeColor();
	if(this->getLeft() != nullptr)
		this->getLeft()->changeColor();
	if(this->getRight() != nullptr)
		this->getRight()->changeColor();
}

Node*
Node::rotateLeft(){
	Node* auxNode = this->getRight();
	this->setRight(auxNode->getLeft());
	auxNode->setLeft(this);
	auxNode->setColor(Node::getColor(this));
	this->setColor(RED);
	return auxNode;
}

Node*
Node::rotateRight(){
	Node* auxNode = this->getLeft();
	this->setLeft(auxNode->getRight());
	auxNode->setRight(this);
	auxNode->setColor(Node::getColor(this));
	this->setColor(RED);
	return auxNode;
}
