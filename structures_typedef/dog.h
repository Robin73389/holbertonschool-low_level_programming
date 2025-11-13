#ifndef DOG_H 
#define DOG_H

/**
 * struct dog - the name for the function
 * @name: the variable
 * @age: the variable age
 * @owner: the variable *owner poppy
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
