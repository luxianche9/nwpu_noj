#include <stdio.h>

int str_equal(char * a, char * b)
{
    int equal = 1;
    for (int i = 0; a[i] != '\0'; i++)
        equal *= (a[i] == b[i]);
    return equal;
}



int main(void)
{
    FILE * picture = fopen("DATA5609.DAT", "r");
    char buff[7];

    //JPEG 6 JFIF
    fseek(picture, 6, SEEK_CUR);
    fgets(buff, 4, picture);
    if (str_equal(buff, "JFIF"))
    {
        printf("JPEG");
        return 0;
    }
    rewind(picture);
    
    //GIF 0 GIF89a
    fseek(picture, 0, SEEK_CUR);
    fgets(buff, 6, picture);
    if (str_equal(buff, "GIF89a"))
    {
        printf("GIF");
        return 0;
    }
    rewind(picture);
    
    //PNG 1 PNG 
    fseek(picture, 1, SEEK_CUR);
    fgets(buff, 3, picture);
    if (str_equal(buff, "PNG"))
    {
        printf("PNG");
        return 0;
    }
    rewind(picture);
    
    return 0;
}