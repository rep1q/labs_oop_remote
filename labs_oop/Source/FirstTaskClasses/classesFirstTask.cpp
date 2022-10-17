#include "classesFirstTask.hpp"


Cursor::Cursor(){
    cX = 0;
    cY = 0;
    sz = 1;
    vw = 0;
    vb = 0;
}


Cursor::Cursor(int coordinates_X, int coordinates_Y, int size, bool view, bool visible){
    cX = coordinates_X;
    cY = coordinates_Y;
    sz = abs(size%16);
    vw = view;
    vb = visible;
}


void Cursor::SetViewAndVisible(bool view, bool visible){
    vw = view;
    vb = visible;
}

void Cursor::ChangeXnY(int x1, int y1){
    cX += x1;
    cY += y1;
}

void Cursor::ChangeSize(int size){
    sz += abs(size%16);
}

void Cursor::ChangeView(bool view){
    vw = view;
}

void Cursor::ChangeVisible(bool visible){
    vb = visible;
}

std::string Cursor::toString(){
    return "(X,Y) = (" + std::to_string(cX) + ", " + std::to_string(cY) + ")\nРазмер = " + std::to_string(sz)+"\nВид: " + std::to_string(vw) + "\nВидимость: " + std::to_string(vb) + "\n";
}
