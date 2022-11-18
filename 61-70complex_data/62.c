#include <stdio.h>
#include <string.h>

int equal(char *str_1, char * str_2, int length)
{
    int result = 1;
    for (int i = 0; i < length; i++)
    {
        result *= (str_1[i] == str_2[i]);
    }
    return result;
}

void replace(char *str, char * fstr, char * rstr)
{
    char str_copy[1000];
    strcpy(str_copy, str);

    int i = 0, j = 0;
    while (str_copy[i] != '\0')
    {
        if (equal(&str_copy[i], fstr, strlen(fstr)))
        {
            strncpy(str + j, rstr, strlen(rstr));
            j += strlen(rstr);
            i += strlen(fstr);
        }
        else
            str[j++] = str_copy[i++];
    }
    str[j] = '\0';
}

int main(void)
{
    char str[1000];
    char fstr[100];
    char rstr[100];
    scanf("%s", str);
    scanf("%s", fstr);
    scanf("%s", rstr);
    
    replace(str, fstr, rstr);

    printf("%s", str);
    return 0;
}