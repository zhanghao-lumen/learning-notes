/* 第 0 课：C 的入口 main、printf、返回值。
 *
 * 编译：cc -std=c17 -Wall -Wextra hello.c -o hello
 * 运行：./hello
 */
#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 1;

    printf("hello, world\n");
    printf("1 + 1 = %d\n", a + b);

    return 0; /* 0 表示正常退出 */
}
