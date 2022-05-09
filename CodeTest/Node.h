#pragma once

// code review
struct Node
{
	int value = 0;
	struct Node* left = nullptr;
	struct Node* right = nullptr;
	
	Node(int v) : value(v) {}
};

