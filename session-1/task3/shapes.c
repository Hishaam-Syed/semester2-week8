
#include <stdio.h>
#include "shapes.h"

int main( void ) {

    // complete the structure definition in the header file first
    // code in main to test the structures and functions
    
    return 0;
}

Rectangle makeRectangle( Point p, float width, float height ){
    Rectangle r = {
        .p = p,
        .width = width,
        .height = height
    };

    return r;
}

float area( Rectangle r ) {
    float a = 0.0;
    a += r.width * r.height;
    return a;
}

void shiftRectangle( Rectangle *r, Point dp ) {
    r->p.x += dp.x;
    r->p.y += dp.y;
}

void scaleRectangle( Rectangle *r, float scale ) {
    r->width *= scale;
    r->height *= scale;
    return;
}
