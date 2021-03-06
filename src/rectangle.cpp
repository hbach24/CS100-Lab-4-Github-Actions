#include "../header/rectangle.hpp"
#include <iostream>
using namespace std;

Rectangle::Rectangle(){
	this->width = 0;
	this->height = 0;
}

Rectangle::Rectangle(int w, int h){
	this->width = w;
	this->height = h;
}

void Rectangle::set_width(int w){
	this->width = w;
}

void Rectangle::set_height(int h){
	this->height = h;
}

int Rectangle::area(){
	return this->width * this->height;
}

int Rectangle::perimeter(){
	return 2*this->width+2*this->height;
}

