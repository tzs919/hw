#include "t2.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "t1.h"

int main7()
{
    char name1[4] = "tao";
    char name2[5] = "taoa";
    strncat(name1, name2, 2);
    printf("%s\n", name1);
    return 0;
}
int main6()
{
    char src[50], dest[50];

    strcpy(src, "This is source");
    strcpy(dest, "This is destination");

    char *p = strncat(dest, src, 3);

    printf("最终的目标字符串： |%s|\n", dest);

    printf("最终的目标字符串： |%s|\n", p);

    printf("%ld\n", strlen(p));

    return (0);
}

int main5()
{
    char dest[5] = {0};
    char *src = "http://c.biancheng.net";
    strncpy(dest, src, 5);
    puts(dest);
    return 0;
}

void f1(char * p)
{
    // p = '\0';
}

//sizeof指针、断言
int main()
{
    char p[10] = "abc";
    ASSERT(strlen(p) > 0);

    f1(p);

    printf("%s\n", p);
}

int main11()
{
    char str[80] = "tao       zhao  sheng";
    const char s[2] = " ";
    char *token;

    /* 获取第一个子字符串 */
    token = strtok(str, s);

    /* 继续获取其他的子字符串 */
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }

    return (0);
}

int main3(int argc, char *argv[])
{
    char name[20] = "     ";
    char *p = strtok(name, " ");
    if (p == NULL)
    {
        printf("===%ld===\n", strlen(""));
    }
    return 0;
}

int main2(int argc, char *argv[])
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
    return 0;
}