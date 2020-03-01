// 选择排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>

int main()
{
    int a[] = { 10, 7, 1, 9, 4, 6, 7, 3, 2, 0 };

    int n;
    int i = 0;
    int j = 0;
    int temp;

    n = sizeof(a) / sizeof(int);

    printf("排序前\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    //选择排序
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        int m = 0;
        printf("第%d轮排序后\n", m + 1);
        for (m = 0; m < n; m++)
        {
            printf("%d ", a[m]);
        }
        printf("\n");
    }

    printf("排序后\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}