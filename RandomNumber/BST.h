#pragma once

#include<iostream>

using namespace std;

class BST
{
public:
	struct node
	{
		int data;
		node* left;
		node* right;
	};

	node* root;

	node* makeEmpty(node* t)
	{
		if (t == NULL)
			return NULL;
		{
			makeEmpty(t->left);
			makeEmpty(t->right);
			delete t;
		}
		return NULL;
	}

	node* insert(int x, node* t)
	{
		if (t == NULL)
		{
			t = new node;
			t->data = x;
			t->left = t->right = NULL;
		}
		else if (x < t->data)
			t->left = insert(x, t->left);
		else if (x > t->data)
			t->right = insert(x, t->right);
		return t;
	}


	BST()
	{
		root = NULL;
	}

	~BST()
	{
		root = makeEmpty(root);
	}

	bool find(int x)
	{
		node *temp = root;
		while (temp != NULL)
		{
			if (temp->data == x)
				break;

			if (x > temp->data)
				temp = temp->right;

			if (x < temp->data)
				temp = temp->left;

		}
		if (temp == NULL)
			return false;
		else if (temp->data == x)
			return true;
	}

};