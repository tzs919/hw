#include "t2.h"

#include <stdio.h>
#include <stdlib.h>

#include "t1.h"

int main(int argc, char *argv[])
{
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    printf("%d + %d = %d\n", x, y, add(x, y));

    struct Student stu = {"taoxf", 11, 11}, stu2 = {
                                                .name = "taozs",
                                                .age = 18,
                                                .score = 99};
    stu = stu2;
    printf("name:%s\nage:%d\nscore:%d\n", stu.name, stu.age, stu.score);
}