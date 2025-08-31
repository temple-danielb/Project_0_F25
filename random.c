#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar();

//Description: return a random capital letter from the alphabet
char randchar() {
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return alphabet[rand()%26];
}