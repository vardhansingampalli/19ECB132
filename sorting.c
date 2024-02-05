#include <stdio.h>
int main()
{

    int i, j, a, n, number[30];
    printf("Enter the value of N \n");
    scanf("%d", &n);

    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);

    for (i = 0; i < n; ++i) 
    {

        for (j = i + 1; j < n; ++j)
        {

            if (number[i] > number[j]) 
            {

                a =  number[i];
                number[i] = number[j];
                number[j] = a;

            }

        }

    }

    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)
        printf("%d\n", number[i]);

return 0;
}

/*
1)  Enter the value of N 
5
Enter the numbers 
6
8
3
0
3
The numbers arranged in ascending order are given below 
0
3
3
6
8

2)Enter the value of N 
7
Enter the numbers 
5
6
9
4
2
7
5
The numbers arranged in ascending order are given below 
2
4
5
5
6
7
9
  */
