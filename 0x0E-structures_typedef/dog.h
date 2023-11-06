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

#endif
