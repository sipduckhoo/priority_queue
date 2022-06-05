#ifndef LISTCLASS_H
#define LISTCLASS_H

#include <iostream>
#include <string>

using namespace std;

typedef struct data { //�αⰡ �ִ� ��ǻ�� ��� ������ �켱������ �ű�
	string comp_lang;
	int popularity;
	data* next;
}D;

class listpriorityqueue { //���Ḯ��Ʈ�� ������ �켱���� ť(ť�̹Ƿ�, �켱������ ������ ���� ��������, �켱������ ������ ���Լ����� ������ ����)
public:
	listpriorityqueue() {
		head = NULL;
		size = 0;
	}
	~listpriorityqueue (); //���Ḯ��Ʈ �켱���� ť�� �����ϰ� �����ϴ� �Ҹ���
	void add(string input, int p); //���Ḯ��Ʈ �켱���� ť�� �ϳ��� ���Ҹ� ����
	string remove(); //���� �켱������ ���� ���Ḯ��Ʈ�� �����͸� ��ȯ�ϰ� ��� ����
	bool isEmpty(); //���Ḯ��Ʈ�� ����ֳ� Ȯ��
	int searchpopular() {
		return head->popularity;
	}
	int getsize() {
		return size;
	}
private:
	D* head;
	int size;
};

#endif LISTCLASS_H
