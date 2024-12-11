#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
	T info;
	Node* left;
	Node* right;

	Node(T value) { info = value; left = right = nullptr; }
	void showNode() {
		cout << "INFO: " << info << endl;
		cout << "\t Left: " << left << " Right: " << right << endl;
	}
};

//-----------------------------------------------------------------

template <typename U>
class BinTree {
Node<U>* root; //Вказівник на перший вузол у дереві
void showSubTree(Node<U>* p) {
	if (p != nullptr) {
		showSubTree(p->left);
		cout << p->info << " ";
		showSubTree(p->right);
	}
}
void delNode(Node<U>* p) {
	if (p != nullptr) {
		delNode(p->left);  
		delNode(p->right); 
		delete p;          
	}
}
public:
	BinTree() { root = nullptr; }
	~BinTree() {
		delNode(root);
	}

	void insert(U value) {
		Node<U>* el = new Node<U>(value);

		if (root == nullptr)//Если дерево пустое
			root = el;
		else {//Если дерево имеет узлы 
			//Поиск мест для вставки
			Node<U>* p = root;
			Node<U>* pPrev = root;
			while (p!= nullptr)
			{
				pPrev = p;
				if (value < p->info) 
					p = p->left;
				else
					p = p->right;
			}
			if (value < pPrev->info)
				pPrev->left = el;
			else
				pPrev->right = el;
		}
	}

	Node<U>* search(U value) {
		//Повернути адресу вузла зі значенням value
		//Якщо value немає в дереві, то повернути nullptr
		Node<U>* p = root;
		while (p != nullptr && p->info !=value)
		{
			if (value < p->info)
				p = p->left;
			else
				p = p->right;
		}
		return p;
	}

	//Повний обхід дерева
	void showTree() {
		if (root == nullptr)
			cout << "Дерево контейнерів порожнє!" << endl;
		else {
			showSubTree(root->left);
			cout << root->info << " ";
			showSubTree(root->right);
			cout << endl;
		}
	}

};
