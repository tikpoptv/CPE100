#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    scanf("%d", &i);
    int c[i];
    for (int j = 0; j < i; j++)
    { // careful
        scanf("%d", &c[j]);
    }
    int E[i], O[i], k1 = 0, k2 = 0;
    for (int j = 0; j < i; j++)
    {
        if (c[j] % 2 == 0)
        {
            E[k1] = c[j]; // แก้บรรทัดนี้จาก == เป็น = เพราะเป็นการกำหนดค่าไม่ใช่การเปรียบเทียบ
            k1++;
        }
        if (c[j] % 2 > 0)
        {
            O[k2] = c[j];
            k2++;
        }
    }
    if (k1 <= 0)
    {
        printf("None");
    }
    else
    {
        for (int j = 0; j < k1; j++)
        {
            printf("%d", E[j]);
        }
    }
    printf("\n");

    if (k2 <= 0)
    {
        printf("None");
    }
    else
    {
        for (int j = 0; j < k2; j++)
        {
            printf("%d", O[j]);
        }
    }
    return 0;
}