#pragma once

// code review
// code review 2
struct Node
{
	int value = 0;
	struct Node* left = nullptr;
	struct Node* right = nullptr;
	
	Node(int v) : value(v) {}
};

