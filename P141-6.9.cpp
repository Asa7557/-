#include<stdio.h>
int Gcd(int a, int b)
{
    int x, r, y;
    while (x)
    {
        x = a >= b ? a : b;
        y = a <= b ? a : b;
        x = x - y;
        if (x == y)
        {
            r = x;
            printf("���ǵ����Լ��Ϊ%d", r);
        }
    }
}
int main()
{
    int r, a, b;
    printf("����������������");
    scanf("%d %d", &a, &b);
    if (a > 0 && b > 0)
        r = Gcd(a, b);
    else
    {
        printf("��������������������");
        scanf("%d %d", &a, &b);
        r = Gcd(a, b);
    }
    return 0;
}