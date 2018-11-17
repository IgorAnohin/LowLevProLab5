#include <stdio.h>
#include <malloc.h>
#include "bmp.h"

int main(void) {
    image *img = malloc(sizeof(image));
    printf("Reading for 90 result: %s\n",
             bmp_from_file("input.bmp", img) ? "Failed" : "Success");

    rotate90(img);
    printf("Writing result: %s\n", 
             bmp_to_file("output90.bmp", img) ? "Failed" : "Success");

    printf("Reading for 180 result: %s\n",
             bmp_from_file("input.bmp", img) ? "Failed" : "Success");

    rotate180(img);
    printf("Writing result: %s\n", 
             bmp_to_file("output180.bmp", img) ? "Failed" : "Success");

    image_destroy(img);
}
