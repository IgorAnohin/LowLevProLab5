#include <stdio.h>
#include <malloc.h>
#include "bmp.h"

int main(void) {
    image *img = malloc(sizeof(image));
    printf("Reading result: %d\n", bmp_from_file("input.bmp", img));

    rotate90(img);
    printf("Writing result: %d\n", bmp_to_file("output90.bmp", img));

    rotate180(img);
    printf("Writing result: %d\n", bmp_to_file("output180.bmp", img));

    image_destroy(img);
}
