#include <stdio.h>

int main()
{
    char userName[50];
    
    printf("Введите ваше имя: ");
    scanf("%s", userName);
    
    printf("Привет, %s\n",  userName);
    
    return 0;
}