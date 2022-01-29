//NAME =INSHA SADAF
//ROLL=20BSC017
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

//remove duplicate from list
/*#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class ListNode{
   public:
      int val;
      ListNode *next;
      ListNode(int data){
         val = data;
         next = NULL;
      }
};
ListNode *make_list(vector<int> v){
   ListNode *head = new ListNode(v[0]);
   for(int i = 1; i<v.size(); i++){
      ListNode *ptr = head;
      while(ptr->next != NULL){
         ptr = ptr->next;
      }
      ptr->next = new ListNode(v[i]);
   }
   return head;
}
void print_list(ListNode *head){
   ListNode *ptr = head;
   cout << "[";
   while(ptr){
      cout << ptr->val << ", ";
      ptr = ptr->next;
   }
   cout << "]" << endl;
}
class Solution {
public:
   ListNode* deleteDuplicates(ListNode* head) {
      ListNode*dummy = new ListNode(INT_MIN);
      dummy->next = head;
      ListNode * curr = dummy;
      while(curr){
         ListNode * next = curr->next;
         while(next && next->val==curr->val)
            next = next->next;
         curr->next = next;
         curr=next;
      }
      return dummy->next;
   }
};
main(){
   Solution ob;
   vector<int> v = {1,1,2,3,3,3,4,5,5};
   ListNode *head = make_list(v);
   print_list(ob.deleteDuplicates(head));
}
*/

//remove duplicate from array

/*#include<iostream>

using namespace std;

int main()
{
int i,j,k,n,a[30];
cout<<"How many elements you want to Enter?"<<endl;
cin>>n;
cout<<"\nEnter the elements of array\n";
for(i=0;i<n;++i)
cin>>a[i];
for(i=0;i<n;++i)
for(j=i+1;j<n;)
{
if(a[i]==a[j])
{
for(k=j;k<n-1;++k)
a[k]=a[k+1];
--n;
}
else
++j;
}
cout<<" After Removal of duplicates from an array :"<<endl;
for(i=0;i<n;++i)
cout<<a[i]<<" ";

return 0;
}
*/


