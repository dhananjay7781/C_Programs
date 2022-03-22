#include <stdio.h>
void main () {
    int x,y,z;
    x = 123, y = 234, z = 122;
    if (x > y && x > z)
    {
        printf("%d is greater\n",x);
    }else if (y > x && y > z)
    {
        printf("%d is greater",y);
    }else {
        printf("%d is greater",z);
    }
    
    
}
