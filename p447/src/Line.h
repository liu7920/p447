#ifndef LINE_H_
#define LINE_H_

#include "Shape.h"

class Line : public Shape{
protected:
	virtual void draw();
public:
	Line(){};
	void line(int a, int b){
		if(a==b){
			cout << "같습니다." << endl;
		}
		else if(a>b){
			cout << "가로가 더 깁니다." << endl;
		}
		else{
			cout << "세로가 더 깁니다." << endl;
		}
	}
	void circle(int a, int b){};
	void rectangle(int a, int b){};
	virtual ~Line(){};
};

#endif /* LINE_H_ */
