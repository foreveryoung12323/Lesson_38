#include <iostream>
#include "BinTree.h"


int main()
{
	BinTree<int> bin;
	bin.insert(13);
	bin.insert(50);
	bin.insert(4);
	bin.insert(25);
	bin.insert(52);
	bin.insert(149);
	bin.insert(8);
	bin.insert(57);
	bin.insert(140);

	bin.showTree();
}

