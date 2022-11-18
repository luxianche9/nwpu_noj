#include <stdio.h>

char * search(char * cpsource, char ch)
{
    int longest_length = 0;
    int current_length = 0;
    int in_pattern = 0;
    
    for (int i = 0; cpsource[i] != '\0'; i++)
    {
        if (cpsource[i] == ch)
        {
            in_pattern = 1;
            current_length++;
        }
        else if (in_pattern && cpsource[i] != ch)
        {
            in_pattern = 0;
            if (current_length > longest_length)
                longest_length = current_length;
            current_length = 0;
        }
    }
    //cpsource end in pattern
    if (in_pattern && (current_length > longest_length))
        longest_length = current_length;

    static char longest_str[100];
    for (int i = 0; i < longest_length; i++)
        longest_str[i] = ch;

    return longest_str;
}

int main(void)
{
    char input[300];
    char c;
    scanf("%s", input);
    //remove \n in buff
    getchar();
    scanf("%c", &c);

    printf("%s", search(input, c));
    
    return 0;
}
