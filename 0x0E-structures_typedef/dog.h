#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dogs data
 * @name: First member
 * @age: second member
 * @owner: third owner
 *
 * Description: this contains the basic info of a dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
