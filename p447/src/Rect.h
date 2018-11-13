#ifndef RECT_H_
#define RECT_H_

#include "Shape.h"

class Rect : public Shape{
protected:
	virtual void draw();
public:
	Rect(){};
	void rectangle(int a, int b){
		if(a==b){
			cout << "정사각형 입니다." << endl;
		}
		else{
			cout << "직사각형 입니다." << endl;
		}
	}
	void circle(int a, int b){};
	void line(int a, int b){};
	virtual ~Rect(){};
};

#endif /* RECT_H_ */
