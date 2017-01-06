#ifndef FISH_CHARACT_H
#define FISH_CHARACT_H


struct exersize {
	const char* description;
	float duration;
};

struct meal {
	const char* ingredients;
	float weight;
};

struct preferences {
	struct meal food;
	struct exersize exersize;
};

struct fish {
	const char* name;
	const char* species;
	int teeth;
	int age;
	struct preferences care;
};


#endif
