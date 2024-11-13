#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    float my_delay = 60000;  // 1_000_000 == 1 sek

    system("clear");
    printf("PPPPP   IIIIIII   N    N\n");
    usleep(my_delay);
    printf("P   PP     I      NN   N IDENTIFICATION\n");
    usleep(my_delay);
    printf("P   PP     I      N N  N\n");
    usleep(my_delay);
    printf("PPPPP      I      N  N N   PROGRAM\n");
    usleep(my_delay);
    printf("P          I      N   NN\n");
    usleep(my_delay);
    printf("P       IIIIIII   N    N\n");
    usleep(my_delay);
    
    printf("\nStrike a key when ready ...");
    getchar();

    printf("\n\n0123456789012345678901234567890123456789\n");

    int lines = 1;
    int length = 38;
    int decrease = 1;

    int len_counter = 40; 
    while (1) 
    {
        if (len_counter <= 4) 
        {
            break;
        }

        // 10 line loop 
        for (int i = 0; i < 5; i++)
        {
            // random number line 
            for (int i = 0; i < len_counter; i++)
            {
                int value = rand() % (9 - 0 + 1) + 0;
                printf("%d", value);
            }
            usleep(my_delay);
            printf("\n");
        }
        // break;
        len_counter--;
    }

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("9003\n");
        usleep(my_delay);
    }

    printf("\nPIN IDENTIFICATION NUMBER: 9003\n");

    printf("\na>");
    getchar();

    return 0;
}
