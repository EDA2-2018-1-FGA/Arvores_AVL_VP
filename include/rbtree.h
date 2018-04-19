#ifndef RBTREE_H
#define RBTREE_H

enum Color {RED, BLACK};

typedef struct Node{
	int key;
	int color;
	struct Node* left;
	struct Node* right;
	struct Node* parent;
  explicit Node(int);
}Node;

class RBTree{
private:
	Node* root;
public:
	RBTree();
	Node*& getRoot();
	Node* getGrandpa(Node*& node);
	Node* getUncle(Node*& node);
	void setColor(Node*& node, int color);
	void insertNode(Node*& root, Node*& node);
	void inOrder(Node*& node);
	void analiseCase(Node*& node);

};

#endif