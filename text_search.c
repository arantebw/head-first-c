#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "I left my heart in Tuitt Coding Bootcamp",
    "Tibiao, Tibiao - a wonderful town",
    "Dancing with a hacker",
    "From here to paternity",
    "The girl from Alabang"
};

void find_track(char search_for[])
{
    int i;
    for (i = 0; i < 5; i++) {
        if (strstr(tracks[i], search_for)) {
	    printf("Track %i: '%s'\n", i, tracks[i]);
        }
    }
}

int main()
{
    char search_for[80];
    printf("Search for: ");
    fgets(search_for, 80, stdin);
    if (search_for[strlen(search_for)-1] == '\n') {
        search_for[strlen(search_for)-1] = '\0';
    }
    find_track(search_for);
    return 0;
}
