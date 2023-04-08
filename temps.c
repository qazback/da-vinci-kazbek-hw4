#include <cs50.h>
#include <stdio.h>

#define NUM_CITIES 10

typedef struct
{
    string city;
    int temp;
}
avg_temp;

avg_temp temps[NUM_CITIES];

void sort_cities(void);

int main(void)
{

    sort_cities();

    printf("\nAverage July Temperatures by City\n\n");

    for (int i = 0; i < NUM_CITIES; i++)
    {
        printf("%s: %i\n", temps[i].city, temps[i].temp);
    }
}

void sort_cities(void)
{
    for (int i = 0; i < NUM_CITIES - 1; i++)
    {
        for (int j = 0; j < NUM_CITIES - i - 1; j++)
        {
            if (temps[j].temp < temps[j + 1].temp)
            {
                avg_temp temp = temps[j];
                temps[j] = temps[j + 1];
                temps[j + 1] = temp;
            }
        }
    }
}
