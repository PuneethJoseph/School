//Binary Search Tree
//Used struct
//Time Complexity ???
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <stack>;
using namespace std;
/*
struct Node {
	int data;
	struct Node *left;
	struct Node *right;
	Node(int data){
		this->data = data;
		cout << this->data << " ";
		left = right = NULL;
	}
};

void printInorder(struct Node *node){
	if (node == NULL){
		return;
	}
	printInorder(node->left);
	cout << node->data << " ";
	printInorder(node->right);
}

void printPostorder(struct Node *node)
{
	if (node == NULL){
		return;
	}
	stack<Node *>treeStack;
	cout << endl;
	treeStack.push(node);
	while (treeStack.empty() == false){
		struct Node *treeNode = treeStack.top();
		cout << " " << treeNode->data << " ";
		treeStack.pop();
		if (treeNode->left){
			treeStack.push(treeNode->left);
			cout << endl;
		}
		if (treeNode->right){
			treeStack.push(treeNode->right);
			cout << endl;
		}
	}

}

int isBST(struct Node *head){
	cout << " bye" << endl;
	if (head == NULL){
		cout << "It is not a BST" << endl;
		return 0;
	}
	if ((head->data > head->left->data) && (head->data < head->right->data)){
		cout << "It is a BST" << endl;
		return 1;
	}
}

int main(){
	struct Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	cout << "postOrder Traversal " << endl;
	printPostorder(root);
	cout << endl <<"Inorder Traversal "<<endl;
	printInorder(root);
	cout << endl;
	//int result = isBST(root);
}*/