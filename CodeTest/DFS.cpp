#include <iostream>
#include "Node.h"

void traverseDFS(Node* pNode)
{
	std::cout << pNode->value << std::endl;
	if (pNode->left)
	{
		traverseDFS(pNode->left);
	}
	if (pNode->right)
	{
		traverseDFS(pNode->right);
	}
}

int main()
{
	//           root
	//       node2  node3
	//     node4        node5
	//   node6
	Node root(0), node2(2), node3(3), node4(4), node5(5), node6(6);
	root.left = &node2; root.right = &node3;
	node2.left = &node4; node4.left = &node6;
	node3.right = &node5;

	traverseDFS(&root);

	return 0;
}