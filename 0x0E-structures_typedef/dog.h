#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct with which dog informations are stored
 * @name: name of the dog
 * @age: The dog's age
 * @owner: The owner of the dog
 *
 * Description: A struct called "dog" that stores the name,
 * age and it's owner's name
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

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
