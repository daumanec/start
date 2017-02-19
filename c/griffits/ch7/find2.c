#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int NUM_ADS = 7;
char *ADS[] = {
		"William: SBM GSOH likes sports, TV, dining",
		"Matt: SWM NS likes art, movies, theater",
		"Luis: SLM ND likes books, theater, art",
		"Mike: DWM DS likes trucks, sports and bieber",
		"Peter: SAM likes chess, working out and art",
		"Josh: SJM likes sports, movies and theater",
		"Jed: DBM likes theater, books and dining"
	      };


int SportsNoBieber(char *s)
{
    return strstr(s, "sports") && !strstr(s, "bieber");
}


int SportsOrWorkout(char *s)
{
    return strstr(s, "sports") || strstr(s, "working out");
}

int NsTheater(char *s)
{
    return strstr(s, "theater") && strstr(s, "NS");
}

void Find(int (*match)(char*))
{
    int i;
    puts("Search results");
    puts("---------------------------------------------");

    for (i = 0; i < NUM_ADS; i++) {
	if (match(ADS[i]))
	    printf("%s\n", ADS[i]);
		
    }
    puts("---------------------------------------------");
}


int main()
{
    Find(SportsNoBieber);
    Find(SportsOrWorkout);
    Find(NsTheater);
    return 0;
}
