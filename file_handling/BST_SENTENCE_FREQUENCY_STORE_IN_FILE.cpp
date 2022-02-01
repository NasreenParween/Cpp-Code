#include <iostream>
#include <fstream>
#include<string>
using namespace std;
class Node{
	public:
	string data;
	 int freq=0;
	Node *left, *right;
	Node(){
		left = right = NULL;
	}
};
//int Node::freq=0;
class BinarySearchTree{
	Node *root;
	public:
	BinarySearchTree();
	bool isEmpty();
	int height(Node *r);
	void inOrder(Node *r);
	void postOrder(Node *r);
	void preOrder(Node *r);
	void insert(string x);
	void del(string x);
	bool search(Node *r);
	Node *getRoot(){return root;}
};

void BinarySearchTree::inOrder(Node *r){
	if(r->left != NULL)
		inOrder(r->left);
	if(r != NULL)
		cout <<"\n[ " << r->data << ", "<<"freq: " << r->freq << " ]   ";
	if(r->right != NULL)
		inOrder(r->right);

}

void BinarySearchTree::preOrder(Node *r){
	if(r != NULL)
		cout <<"\n[ " << r->data << ", "<<"freq: " << r->freq << " ] ";
	if(r->left != NULL)
		preOrder(r->left);
	if(r->right != NULL)
		preOrder(r->right);

}

void BinarySearchTree::postOrder(Node *r){
	if(r->left != NULL)
		postOrder(r->left);
	if(r->right != NULL)
		postOrder(r->right);
	if(r != NULL)
		cout <<"\n[ " << r->data << ", " <<"freq: "<<r->freq <<" ]   ";
}


BinarySearchTree::BinarySearchTree(){
	root = NULL;
}
int BinarySearchTree::height(Node *r){
	if(r == NULL) return 0;
	if(height(r->left) > height(r->right))
		return 1 + height(r->left);
	else
		return 1 + height(r->right);
}

bool BinarySearchTree::search(Node *s){
	Node *r = root;

		if(r->data==s->data && r!=s)
		{
			s->freq=s->freq+1;
		}
		else
		{
			s->freq=s->freq++;
		}
	while(r != NULL && r!=s)
	{
		if(s->data < r->data)
			r = r->left;
		else
			r = r->right;
		if(r->data==s->data && r!=s)
		{
			s->freq=s->freq+1;
		}
		else
		{
			s->freq=s->freq++;
		}
	}
}

void BinarySearchTree::insert(string x){
	Node *r = root;
	Node *p=NULL;
	while(r != NULL)
	{
	  if(x < r->data)
	  {
		  p = r;
		  r = r->left;
	  }
	  else
	  {
		  p = r;
		  r = r->right;
	  }
	}
	Node *nNode = new Node();
	nNode->data = x;
	if(root == NULL)
		root = nNode;
	else if(x < p->data)
		p->left = nNode;
	else
		p->right = nNode;
	nNode->freq= nNode->freq+1;
	search(nNode);
}
int main(){

	BinarySearchTree bt;
 	string s,s1;
	fstream fin;
	fin.open("nasreen.txt",ios::out);
	cout<<"ENTER THE CONTENT TO STORE IN A FILE ::"<<endl;
	getline(cin,s);
	fin<<s;
	fin.close();
	fin.open("nasreen.txt",ios::in);   //connecting the object  'in' with the text file1 using member function open() in reading  format
	fin.seekp(ios::beg);
	while(fin.eof()==0)
	{
		string s1;
		fin>>s1;
		cout<<"CONTENT OF FILE ::"<<s1<<endl;
		bt.insert(s1);
	}
	fin.close();
	cout << "Height="<<bt.height(bt.getRoot());
	cout<<"\nInorder:"<<endl;
	bt.inOrder(bt.getRoot());
	cout<<"\nPre-order:"<<endl;
	bt.preOrder(bt.getRoot());
	cout<<"\nPost-order:"<<endl;
	bt.postOrder(bt.getRoot());
	return 0;
}
