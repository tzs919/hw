#include <stdio.h>
#include <stdlib.h>

int add(int, int); //原型

struct Student
{
    char name[10];
    int age;
    int score;
};

int main(int argc, char *argv[])
{
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    printf("%d + %d = %d\n", x, y, add(x, y));

    struct Student stu,stu2 = {
        .name = "taozs",
        .age = 18,
        .score = 99};
    stu = stu2;
    printf("name:%s\nage:%d\nscore:%d\n", stu.name, stu.age, stu.score);
}