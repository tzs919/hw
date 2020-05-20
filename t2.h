#ifndef T2_H
#define T2_H

#include <assert.h>

#define DEBUG

#ifdef DEBUG
#define ASSERT(f) assert(f)
#else
#define ASSERT(f) ((void)0)
#endif

struct Student
{
    char name[10];
    int age;
    int score;
};

#endif