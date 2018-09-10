#include <stdio.h>


#define BEGIN 1;

int main(int argc, char *argv[])
{
    int characters, lines, words, state;
    char c;

    state = characters = lines = words = 0;
    while((c = getchar()) != '0') {
        characters++;
        if(c == '\n') {
            lines++;
            state = 0;
            continue;
        } else if(c == ' ') {
            state = 0;
            continue;
        } else if(c == '\t') {
            state = 0;
            continue;
        } else {
            if(state == 0) {
                state = BEGIN;
                words++;
            }
            continue;
        }
    }

    printf("%d characters. %d words. %d lines.\n", characters, words, lines);
}
