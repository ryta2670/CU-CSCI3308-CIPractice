/*
 * geometry.h
 * Andy Sayler
 * CSCI 3308
 * Summer 2014
 *
 * This file contains a simple geomtery functions.
 *
 */

#include <stdbool.h>

/* 2D Coordinate Struct */
typedef struct coord_2d {
    double x;
    double y;
} coord_2d_t;

/* Return the distance between two 2D coordinates */
double coord_2d_dist(const coord_2d_t* a, const coord_2d_t* b);

/* Test if two 2D coordinates are equal (e.g. withen 0.01 of each other) */
bool coord_2d_eq(const coord_2d_t* a, const coord_2d_t* b);

/* Calculate the midpoint between two 2D coordinates and load into mid */
void coord_2d_midpoint(coord_2d_t* mid, const coord_2d_t* a, const coord_2d_t* b);


double coord_2d_area_triangle(const coord_2d_t* a, const coord_2d_t* b, const coord_2d_t* c)
{
    double m = coord_2d_t* a(x) * (coord_2d_t* b(y) - coord_2d_t* c(y));
    double n = coord_2d_t* b(x) * (coord_2d_t* c(y) - coord_2d_t* a(y));
    double o = coord_2d_t* c(x) * (coord_2d_t* a(y) - coord_2d_t* b(y));
    
    return (m + n + o) / 2;
};