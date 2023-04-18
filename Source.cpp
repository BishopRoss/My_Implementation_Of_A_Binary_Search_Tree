/********************************************
*  Week 6 lesson:                           *
*   implementation of a binary search tree  *
*********************************************/

#include <iostream>
#include "newBinarySearchTree.h"
#include "time.h"

using namespace std;

int main()
{
	BinarySearchTree bst;

	int x;

	if (bst.isEmpty()) cout << "BST is empty" << endl;
	else cout << "BST is not empty" << endl;

	srand((unsigned int)time(0));

	for (int i = 0; i < 10; i++)
		bst.add(rand() % 20);

	if (bst.isEmpty()) cout << "BST is empty" << endl;
	else cout << "BST is not empty" << endl;

	bst.display();
	cout<<bst.to_string();
	cout << endl;
	
	x = rand() % 20;

	if (bst.search(x)) cout << x << " was found!" << endl;
	else cout << x << " was not found!" << endl;

	cout << "Minimum of the tree = " << bst.getMinimum() << endl;

	return 0;
}