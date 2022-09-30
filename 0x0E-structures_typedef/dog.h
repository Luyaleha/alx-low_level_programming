#ifndef DOG_H
#define DOG_H
/**
 * struct dog - informtion about the dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: the structure of dog have a detail information
 * about the dog name, age and owner
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* #ifndef DOG_h */
