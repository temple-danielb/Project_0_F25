#include <stdlib.h>
//Defining the rand_string function 
void rand_string(char *s, size_t size) {
    //Just using an array of lower and upper case letters to have the random string be pulled from
    static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (size_t i = 0; i < size; i++) {
        int key = rand() % (sizeof(charset) - 1);
        s[i] = charset[key];
    }
    s[size] = '\0';
}
