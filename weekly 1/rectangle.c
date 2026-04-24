#include <stdio.h>
int main(void)
{
    int width;
    int height;

    printf("height =");
    printf("width =");

    scanf("%d", &height);
    scanf("%d", &width);

    printf("area=%d\n", width*height);
    printf("perimeter=%d\n", 2*(width+height));
}
