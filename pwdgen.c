#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <time.h>

int RandomChar()
{
    return rand() % 4;
}
int randomInt()
{
    return rand() % 10;
}
int randomspc()
{
    return rand() % 4;
}
int digit()
{
    return rand() % 3;
}

int main()
{
    srand(time(NULL));

    // the length of the password
    int length;

    int stringsize = length + 1;

    printf("enter the length of password you want..\n");

    scanf("%n", &length);

    // intialsing the array containg the password
    char pwd[stringsize];

    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    char csmall[4] = {'a', 'b', 'c', 'd'};

    char specialchar[] = {'@', '#', '$', '_'};

    for (int i = 0; i < length - 1; i++)
    {

        int randomNum = digit();

        if (randomNum == 0)
        {
            // this letter of password will be a number

            pwd[i] = arr[randomInt()];
        }
        if (randomNum == 1)
        {
            // this letter of the password will be a character
            pwd[i] = specialchar[randomspc()];
        }

        if (randomNum == 2)
        { // the letter of the password will be a alphabet
            pwd[i] = csmall[RandomChar()];
        }
        }

    pwd[length] = '\0';

    // prinitng the password generated...
    printf("Your generated password is %s", pwd);

    return 0;
}