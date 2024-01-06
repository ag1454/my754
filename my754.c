#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

int main()
{
        int userOption; // store user's option

        printf("Input options: 1. IEEE754 in Hexadecimal 2. Floating-point number.\n"); // output options to user
        scanf("%d", &userOption); // collect user's input

        while (userOption != 1 && userOption != 2) // if the user input is not 1 or 2, loop until input is 1 or 2
        {
                printf("Please input either 1 or 2.\n"); // prints until input is either 1 or 2
                scanf("%d", &userOption); // collect user's input
        }

        if (userOption == 1) // if the user selected 1...
        {
                float f; // store user's hexadecimal as a float
                int i; // for conversion

                printf("Please enter a number in Hexadecimal.\n"); // output prompting user for hexadecimal number
                scanf("%x", &i); // collect user's input (as an int for conversion)

                printf("0x%x is ", i); // output part 1

                f = *(float*)&i; // "convert from hexadecimal to float" (type punning)

                printf("%.2f.\n", f); // output part 2
        }
        else // if the user did not select 1, then the user must have selected 2
        {
                float f; // store user's float as a float
                int i; // for conversion

                printf("Please enter a number in Floating-point.\n");
                scanf("%f", &f); // collect user's input (as a float for conversion)

                printf("%.2f is ", f); // output part 1

                i = *(int*)&f; // "convert from hexadecimal to float" (type punning)

                printf("0x%x.\n", i); // output part 2
        }

        return 0; // return
}
