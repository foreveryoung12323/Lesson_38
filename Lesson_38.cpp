#include <iostream>
#include "BinTree.h"
#include"Train.h"
#include<set>

int main()
{
	//BinTree<int> bin;
	//bin.insert(13);
	//bin.insert(50);
	//bin.insert(4);
	//bin.insert(25);
	//bin.insert(52);
	//bin.insert(149);
	//bin.insert(8);
	//bin.insert(57);
	//bin.insert(140);

	//bin.showTree();

	set<Train> table;
	table.insert(Train("Lviv", "123A", "07:00"));
	table.insert(Train("Dnipro", "154A", "17:00"));
	table.insert(Train("Kiyv", "321B", "10:00"));
	table.insert(Train("Odessa", "113A", "19:30"));

	set<Train>::iterator p;
	for (p = table.begin(); p != table.end(); p++) {
		cout << p->getDepacture() << " " << p->getStation() << endl;
	}
}

