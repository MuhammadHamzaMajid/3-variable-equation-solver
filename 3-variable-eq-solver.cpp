#include<stdio.h>
int main(void)
{
    float a[3][4] = { {1,2,3,4}, {4,5,6,7},{7,8,9,10} };

    printf("\n\nThe entered matrix is:\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.1f\t", a[i][j]);
        }
        printf("\n");
    }
    float a1 = a[0][0];
    for (int i = 0; i < 3; i++)
    {
        if (a[i][i] == a1)
        {
            for (int j = 0; j < 4; j++)
            {
                a[i][j] = a[i][j] / a1;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (i != 0) {
            float b1 = a[i][0];
            for (int j = 0; j < 4; j++)
            {
                a[i][j] -= b1 * a[0][j];
            }
        }
    }

    float a2 = a[1][1];
    for (int i = 0; i < 3; i++)
    {
        if (a[i][i] == a2)
        {
            for (int j = 0; j < 4; j++)
            {
                a[i][j] = a[i][j] / a2;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (i != 1) {
            float b2 = a[i][1];
            for (int j = 0; j < 4; j++)
            {
                a[i][j] -= b2 * a[1][j];
            }
        }
    }

    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.1f\t", a[i][j]);
        }
        printf("\n");
    }
    float a3 = a[2][2];
    for (int i = 0; i < 3; i++)
    {
        if (a[i][i] == a3)
        {
            for (int j = 0; j < 4; j++)
            {
                a[i][j] = a[i][j] / a3;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (i != 2) {
            float b3 = a[i][2];
            for (int j = 0; j < 4; j++)
            {
                a[i][j] -= b3 * a[2][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.1f\t", a[i][j]);
        }
        printf("\n");
    }
}
