#pragma once

struct Node
{
	int value;
	struct Node* left = nullptr;
	struct Node* right = nullptr;
	
	Node(int v) :value(v) {}
};

