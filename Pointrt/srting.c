#include<stdio.h>
#include<string.h>

int main()
{
    char a[100]; 
    char *b;

    printf("Enter the String: ");
    fgets(a, sizeof(a), stdin); 
    
    a[strcspn(a, "\n")] = '\0';

    b = a;
    
    while(*b != '\0')
    {
        printf("%c is in the string\n", *b);
        b++;
    }
 
    return 0;
}
