#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle : public Shape{
protected:
	virtual void draw();
public:
	Circle(){};
	void circle(int a, int b){
		if(a==b){
			cout << "원 입니다." << endl;
		}
		else{
			cout << "타원 입니다." << endl;
		}
	}
	void rectangle(int a, int b){};
	void line(int a, int b){};
	virtual ~Circle(){};
};

#endif /* CIRCLE_H_ */
