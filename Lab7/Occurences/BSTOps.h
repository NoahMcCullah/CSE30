#ifndef BSTOps_h
#define BSTOps_h

#include "BSTComplete.h"

int occSearch(Node* tree, int val){
	if (!tree ){
		return 0;
	}
	if (tree->data == val){
		return 1 + occSearch(tree->right, val) + occSearch(tree->left, val);
	}
	else if (val < tree->data){
		return occSearch(tree->left, val);
	}
	else{
		return occSearch(tree->right, val);
	}
}

int occurrences(Node* root, int value){
    int count = 0;

    count = occSearch(root, value);




    return count;
}

#endif