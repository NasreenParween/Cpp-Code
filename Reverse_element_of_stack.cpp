#include <iostream>

// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to transfer elements
// from the stack X to the stack Y
void transfer(stack<int>& X,
			stack<int>& Y)
{
	// Iterate while X is not empty
	while (!X.empty()) {

		// Push the top element
		// of X into Y
		Y.push(X.top());

		// Pop from X
		X.pop();
	}
}

// Function to display the
// contents of the stack S
void display(stack<int> S)
{
	// Iterate while S is
	// not empty
	while (!S.empty()) {

		// Print the top
		// element of the stack S
		cout << S.top() << " ";

		// Pop from S
		S.pop();
	}
	cout << endl;
}

// Function to reverse a stack using two stacks
void reverseStackUsingTwoStacks(stack<int>& S)
{
	// Two additional stacks
	stack<int> A, B;

	// Transfer all elements
	// from the stack S to A
	transfer(S, A);

	// Transfer all elements
	// from the stack A to B
	transfer(A, B);

	// Transfer all elements
	// from the stack B to S
	transfer(B, S);

	// Print the contents of S
	display(S);
}
// Driver Code
int main()
{
	// Input
	stack<int> S;
	S.push(5);
	S.push(4);
	S.push(3);
	S.push(2);
	S.push(1);

	// Function call
	reverseStackUsingTwoStacks(S);

	return 0;
}
