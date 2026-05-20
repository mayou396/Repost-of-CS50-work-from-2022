#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        //take user input
        n = get_int("height: ");
    } while (n < 1 || n > 8);

    // print out that many hashes
    for (int i = 0; i < n; i++)
    {
   
        for (int j = 0; j < n; j++)
   
        {
            if (j + i < n - 1)
        printf(" ");
        else
        printf("#");
        }
        printf("\n");
}
}