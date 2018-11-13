#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
using namespace std;

class Shape {
	Shape* next;
protected:
	virtual void draw()=0;
public:
	Shape() {next = NULL; }
	virtual ~Shape(){}
	void paint();
	Shape* add(Shape* p);
	Shape* getNext() { return next; }
	virtual void circle(int a, int b) = 0;
	virtual void rectangle(int a, int b) = 0;
	virtual void line(int a, int b) = 0;
};

#endif /* SHAPE_H_ */
