#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int i, c = 0;
    char ch1[20], ch2[20], ch;
    printf("________________________________________________________________________________________________________________________________\n");
    printf("\n");
    printf("                                                    LOGIN SYSTEM                                                                \n");
    printf("________________________________________________________________________________________________________________________________\n");
    printf("Enter the username\n");
    gets(ch1);
    printf("Enter the password\n");
    while (1)
    {
        ch = getch();
        if (ch == 13)
            break;
        else if (ch == 8)
        {
            if (c != 0)
            {
                printf("\b");
                printf("%c", 32);
                printf("\b");
                c--;
            }
            else
                continue;
        }
        else
        {
            putchar('*');
            ch2[c] = ch;
            c++;
        }
        ch2[c] = '\0';
    }
   
    printf("\n");
    if (strcmp(ch1, "Shubham") == 0)
    {
        if (strcmp(ch2, "1234") == 0)
        {
            printf("Login successful\n");
        
        }
        else
        {
            printf("Wrong password\n");
        }
    }
    else
    {
        printf("Wrong username\n");
    }
}