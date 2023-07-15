#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

void org(Point * ptr) // 원점대칭
{
    ptr -> xpos = (ptr -> xpos) * -1;
    ptr -> ypos = (ptr -> ypos) * -1;
}

void show(Point pos)
{
    printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

int main(void)
{
    Point pos = {7, -5};
    org(&pos);
    show(pos);
    org(&pos);
    show(pos);
    return 0;
}
