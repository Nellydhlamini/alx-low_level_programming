#ifndef _HEADER_
#define _HEADER_
/**
 * struct dog - dog attributes
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Description of the structure: Dog attributes
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t: Typpedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
