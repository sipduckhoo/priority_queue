#include "listclass.h"

int main() {
	listpriorityqueue l;
	cout << "The popular programming language" << endl;
	l.add("C", 4);
	l.add("Javascript", 9);
	l.add("Python", 10);
	l.add("Swift", 1);
	l.add("Java", 8);
	l.add("C#", 6);
	l.add("C++", 8);
	l.add("Assembly", 3);
	l.add("Visual Basic", 5);
	l.add("SQL", 2);
	int limit = l.getsize();

	for (int i = 0; i < limit; i++) {
		int r = limit + 1 - l.searchpopular();
		switch (r) {
		case 1:
			cout << r << "st. " << l.remove() << endl;
			break;
		case 2:
			cout << r << "nd. " << l.remove() << endl;
			break;
		case 3:
			cout << r << "rd. " << l.remove() << endl;
			break;
		default:
			cout << r << "th. " << l.remove() << endl;
			break;
		}
	}
	return 0;
}