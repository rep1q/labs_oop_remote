#ifndef classesFirstTask_hpp
#define classesFirstTask_hpp

#include <stdio.h>
#include "string"


class Cursor{
private:
    int cX;
    int cY;
    int sz;
    bool vw, vb;
    
public:
    Cursor();
    Cursor(int coordinates_X, int coordinates_Y, int size, bool view, bool visible);
    void SetViewAndVisible(bool view, bool visible);
    void ChangeXnY(int x1, int y1);
    void ChangeSize(int size);
    void ChangeView(bool view);
    void ChangeVisible(bool visible);
    std::string toString();
    
};


#endif /* classes_hpp */
