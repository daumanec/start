#include <stdarg.h>
#include <stdio.h>

enum drink {
    MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND, ZOMBIE
};

double Price (enum drink d)
{
    switch (d) {
    case MUDSLIDE:
	return 6.79;
    case FUZZY_NAVEL:
	return 5.31;
    case MONKEY_GLAND:
	return 4.82;
    case ZOMBIE:
	return 5.89;
    default:
	return 0;
    }
}

void PrintInt(int args, ...)
{
    va_list ap;
    va_start(ap, args);

    int i;
    for (i = 0; i < args; i++) {
	printf("Argument: %d\n", va_arg(ap,int));
    }

    va_end(ap);
}

double Total(int args, ...)
{
    double sum = 0;

    va_list buff;
    va_start(buff, args);
    int i;
    for (i = 0; i < args; i++) {
	sum += Price(va_arg(buff, enum drink));
    }
    va_end(buff);
    return sum;
}


int main()
{
    // PrintInt(4, 111, 23, 493, 33);
    printf("Price: %.2f\n", Total(4, MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND, ZOMBIE));
    printf("Price: %.2f\n", Total(3, MUDSLIDE, FUZZY_NAVEL, ZOMBIE));
    printf("Price: %.2f\n", Total(2, FUZZY_NAVEL, ZOMBIE));
    printf("Price: %.2f\n", Total(1, ZOMBIE));

    return 0;
}
