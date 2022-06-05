#include "listclass.h"

/*int main() {
	listpriorityqueue l;
	cout << "The popular programming language" << endl;
	l.add("C", 9);
	l.add("Javascript", 4);
	l.add("Python", 10);
	l.add("Swift", 1);
	l.add("Java", 8);
	l.add("C#", 6);
	l.add("C++", 7);
	l.add("Assembly", 3);
	l.add("Visual Basic", 5);
	l.add("SQL", 2);
	int limit = l.getsize();

	for (int i = 0; i < limit; i++) {
		switch (i) {
		case 0:
			cout << i + 1 << "st. " << l.remove() << endl;
			break;
		case 1:
			cout << i + 1 << "nd. " << l.remove() << endl;
			break;
		case 2:
			cout << i + 1 << "rd. " << l.remove() << endl;
			break;
		default:
			cout << i + 1 << "th. " << l.remove() << endl;
		}
	}
	return 0;
}*/

int main() {
	listpriorityqueue l;
	l.add("f", 1);
	l.add("r", 1);
	l.add("a", 10);
	l.add("b", 1);
	l.add("q", 8);
	l.add("n", 8);
	l.add("d", 8);
	l.add("c", 8);
	l.add("ct", 1);
	l.add("e", 1);
	int limit = l.getsize();

	for (int i = 0; i < limit; i++) 
		cout << i + 1 << ". " << l.remove() << endl;
	return 0;
}