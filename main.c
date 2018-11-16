#include <stdio.h>
#include <malloc.h>
#include "bmp.h"

int main(void) {
    image *img = malloc(sizeof(image));
    FILE *f = fopen("input.bmp", "rb");

    printf("%d", bmp_from_file("input.bmp", img));
    rotate90(img);
    if (f)
        fclose(f);
    f = fopen("output90.bmp", "wb");
    printf("%d", bmp_to_file("output90.bmp", img));
    if (f)
        fclose(f);
    rotate180(img);
    f = fopen("output180.bmp", "wb");
    printf("%d", bmp_to_file("output180.bmp", img));
    if (f)
        fclose(f);

    image_destroy(img);
}
