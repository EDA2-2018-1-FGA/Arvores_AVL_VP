#include <bits/stdc++.h>
#include "rbtree.h"
using namespace std;

Node::Node(int key){
	this->key = key;
  color = RED;
  left = right = parent = nullptr;
}

RBTree::RBTree(){
	root = nullptr;
}

Node*&
RBTree::getRoot(){
	return root;
}

Node*
RBTree::getGrandpa(Node*& node){
	if(node!=nullptr && node->parent!=nullptr){
		Node* grandpa = node->parent->parent;
		return grandpa;
	}else{
		return nullptr;
	}
}

Node*
RBTree::getUncle(Node*& node){
	Node* grandpa = getGrandpa(node);
	Node* uncle;
	if(grandpa==nullptr)
		return nullptr;
	if(node->parent == grandpa->left){
		uncle = grandpa->right;
		return uncle;
	}
	else if(node->parent == grandpa->right){
		uncle = grandpa->left;
		return uncle;
	}
}

void
RBTree::setColor(Node*& node, int color){
	if(node!=nullptr)
		node->color = color;
	else 
		return;
}

void
RBTree::insertNode(Node*& root, Node*& node){
	if(root==nullptr){
		root = node;
	}
	if(node->key < root->key){
		insertNode(root->left, node);
		root->left->parent = root;
		analiseCase(root);
	}else if(node->key > root->key){
		insertNode(root->right, node);
		root->right->parent = root;
		analiseCase(root);
	}
}

void
RBTree::inOrder(Node*& node){
  if(node == nullptr)
    return;
  inOrder(node->left);
  cout << node->key << " " << node->color << endl;
  inOrder(node->right);
}

void
RBTree::analiseCase(Node*& node){
	//Node* uncle = node->parent->
	if(node->parent == nullptr && node->color == RED){//Root node needs to be BLACK
		setColor(node, BLACK);
	}
	//if(node->parent != nullptr){
	//	if(node->parent->color == RED)
	//}
}