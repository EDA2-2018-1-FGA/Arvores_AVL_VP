#ifndef NODE_H
#define NODE_H

enum Color {RED, BLACK};

class Node{
private:
	int key;
	int color;
	Node* left;
	Node* right;
	Node* parent;
public:
	Node(int key);
	int getKey();
	Node* getLeft();
	void setLeft(Node* node);
	Node* getRight();
	void setRight(Node* node);
	Node* getParent();
	void setParent(Node* node);
	static int getColor(Node* node);
	void setColor(int color);
	void changeColor();
	void printNode();
	void swapSelfAndChildsColor();
	Node* rotateLeft();
	Node* rotateRight();

};

#endif
