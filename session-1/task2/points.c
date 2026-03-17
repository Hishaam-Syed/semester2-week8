
#include <stdio.h>
#include<math.h>
#include "points.h"

int main( void ) {

    // complete the structure definition in the header file first
    // implement code for the following
    // include necessary libraries
    /*
    Point p1 = { .x=1, .y=2 };
    Point p2 = { .x=-2, .y=4 };
    
    printf(" Distance between (%.1f,%.1f) and (%.1f,%.1f) is %f\n", 
             p1.x,p1.y,p2.x,p2.y,distance(p1,p2));
    */
    Point p1 = { .x=1, .y=2 };
    Point p2 = { .x=-2, .y=4 };
    printf(" Distance between (%.1f,%.1f) and (%.1f,%.1f) is %f\n", 
             p1.x,p1.y,p2.x,p2.y,distance(p1,p2));
    Point reflected = reflect(p2);
    printf("(%.1f,%.1f)\n", reflected.x, reflected.y);
    return 0;
}

float distance( Point p, Point q ) {
    // implement distance here
    float dis = sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2)) ;
    return dis;
}

Point reflect(Point q) {
    Point reflected = {.x = q.x, .y = q.y * -1 };
    return reflected;
}