#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
#include <stdio.h>

char *_strcat(char *dest, const char *src) {
    char *ptr = dest;
    
    // Find the end of the destination string
    while (*ptr != '\0') {
        ptr++;
    }
    
    // Append characters from src to dest
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    
    // Add the terminating null byte
    *ptr = '\0';
    
    return dest;
}

int main() {
    char dest[50] = "Hello, ";
    char src[] = "World!";
    
    _strcat(dest, src);
    
    printf("Concatenated string: %s\n", dest);
    
    return 0;
}
