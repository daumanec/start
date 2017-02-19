#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct {
    int width;
    int height;
} rectangle;


int CompareScores(const void* scoreA, const void* scoreB)
{
    int a = *(int*)scoreA;
    int b = *(int*)scoreB;
    return a-b;
}

int CompareScoresInv(const void* scoreA, const void* scoreB)
{
    int a = *(int*)scoreA;
    int b = *(int*)scoreB;
    return b-a;
}

int CompareAreas(const void* rectA, const void* rectB)
{
    rectangle* a = (rectangle*)rectA;
    rectangle* b = (rectangle*)rectB;

    return a->width * a->height - b->width * b->height; 
}

int CompareNames(const void* nameA, const void* nameB)
{
    char* a = *(char**)nameA;
    char* b = *(char**)nameB;

    return strcmp(a, b);
}

int CompareAreasInv(const void* rectA, const void* rectB)
{
    rectangle* a = (rectangle*)rectA;
    rectangle* b = (rectangle*)rectB;

    return b->width * b->height - a->width * a->height; 
}

int CompareNamesInv(const void* nameA, const void* nameB)
{
    char* a = *(char**)nameA;
    char* b = *(char**)nameB;

    return strcmp(b, a);
}

int main()
{
    int scores[] = {543,323,32,554,11,3,112};
    int i;
    qsort(scores, 7, sizeof(int), CompareScoresInv);
    
    puts("These are the scores in order:");
    for (i = 0; i < 7; i++) {
	printf("Score = %i\n", scores[i]);
    }

    char *names[] = {"Karen", "Mark", "Brett", "Molly", "Andy"};
    qsort(names, 5, sizeof(char*), CompareNamesInv);
    puts("These are the names in order:");
    for (i = 0; i < 5; i++) {
	printf("%s\n", names[i]);
    }
    return 0;
}
