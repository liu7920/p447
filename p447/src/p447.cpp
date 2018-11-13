//============================================================================
// Name        : p447.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"

int main() {

	Shape *pStart=NULL;
	Shape *pLast;

	pStart = new Circle();
	pLast = pStart;

	pLast = pLast->add(new Rect());
	pLast = pLast->add(new Circle());
	pLast = pLast->add(new Line());
	pLast = pLast->add(new Rect());

	Shape* p = pStart;
	while(p != NULL){
		p->paint();
		p = p->getNext();
	}

	p=pStart;
	while(p != NULL){
		Shape* q = p->getNext();
		delete p;
		p = q;
	}

	int a,b;
	Shape *c = new Circle();
	cout << "두 수를 입력 : ";
	cin >> a >> b;
	c->circle(a,b);

	Shape *r = new Rect();
	cout << "두 수를 입력 : ";
	cin >> a >> b;
	r->rectangle(a,b);

	Shape *l = new Line();
	cout << "두 수를 입력 : ";
	cin >> a >> b;
	l->line(a,b);

	return 0;
}
