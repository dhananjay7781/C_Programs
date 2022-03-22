#include <stdio.h>
//#pragma pack(18)
struct demo {
        int pages;
        double price;
        char ch;
    };
void main () {
    printf("%ld\n",sizeof(struct demo));
}
