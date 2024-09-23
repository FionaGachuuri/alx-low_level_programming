#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
size_t _strlen(const char *s);
int _puts(const char *str);
char *_strcpy(char *dest, const char *src);
int _atoi(const char *s);
char *_strcat(char *dest, const char *src);
char *_strncat(char *dest, const char *src, size_t n);
char *_strncpy(char *dest, const char *src, size_t n);
int _strcmp(const char *s1,const char *s2);
void *_memset(void *s, int c, size_t n);
void *_memcpy(void *dest, const void *src,size_t n);
char *_strchr(const char *s, int c);
size_t _strspn(const char *s, const char *accept);
char *_strpbrk(const char *s, const char *accept);
char *_strstr(const char *haystack, const char *needle);

#endif /* MAIN_H */
