#include <iostream>
#include "Rect.h"

Rect::Rect(){

	length = 5;
	width = 7;
}
int Rect::getArea(){

	double area = length*width;
	return area;

}
