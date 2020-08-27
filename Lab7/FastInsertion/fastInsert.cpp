#include <iostream>
#include "BST.h"
#include "RandomSupport.h"
#include "BSTUtil.h"

using namespace std;

int main(int argc, const char * argv[]) {
	long N;
	cin >> N;

	Node* root = NULL;

	randomizer device = new_randomizer();
    uniform_distribution range = new_distribution(1, N);

    for(int i = 0;i < N;i++){
    	long rand = sample(range, device);
        root = insert(root, rand);
    }

    root = insertSpecialNumber(root);

	findSpecialNumber(root);

	return 0;
}