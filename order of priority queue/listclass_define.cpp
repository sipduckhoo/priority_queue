#include "listclass.h"

listpriorityqueue::~listpriorityqueue() {
	D* tmp;

	while (!this->isEmpty()) {
		tmp = this->head->next;
		delete this->head;
		this->head = tmp;
	}
}

void listpriorityqueue::add(string input, int p) {
	if (isEmpty()) {
		this->head = new D;
		this->head->next = NULL;
		this->head->comp_lang = input;
		this->head->popularity = p;
	}
	else {
		D* insert = new D;
		insert->comp_lang = input;
		insert->popularity = p;
		D* tmp1 = this->head;
		D* tmp2 = NULL;
		
		while (tmp1->popularity >= insert->popularity) {
			tmp2 = tmp1;
			if (tmp1->next != NULL)
				tmp1 = tmp1->next;
			else {
				tmp2->next = insert;
				insert->next = NULL;
				this->size++;
				return;
			}
		}
		if (tmp1 != this->head)
			tmp2->next = insert;
		else
			this->head = insert;
		insert->next = tmp1;
	}
	this->size++;
}

string listpriorityqueue::remove() {
	D* tmp = NULL;
	if(this->head->next != NULL)
		tmp = this->head->next;
	string output = this->head->comp_lang;
	delete this->head;
	this->size--;
	this->head = tmp;
	return output;
}

bool listpriorityqueue::isEmpty() {
	if (head != NULL)
		return false;
	return true;
}