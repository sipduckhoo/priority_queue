#ifndef LISTCLASS_H
#define LISTCLASS_H

#include <iostream>
#include <string>

using namespace std;

typedef struct data { //인기가 있는 컴퓨터 언어 순으로 우선순위를 매김
	string comp_lang;
	int popularity;
	data* next;
}D;

class listpriorityqueue {
public:
	listpriorityqueue() {
		head = NULL;
		size = 0;
	}
	~listpriorityqueue (); //연결리스트 우선순위 큐를 삭제하고 종료하는 소멸자
	void add(string input, int p); //연결리스트 우선순위 큐에 하나의 원소를 삽입
	string remove(); //가장 우선순위가 높은 연결리스트의 데이터를 반환하고 노드 삭제
	bool isEmpty(); //연결리스트가 비어있나 확인
	int getsize() {
		return size;
	}
private:
	D* head;
	int size;
};

#endif LISTCLASS_H
