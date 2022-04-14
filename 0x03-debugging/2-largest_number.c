#include "main.h"

<<<<<<< HEAD


=======
>>>>>>> 4b263b1b3fa70b8ddf625d4bf53c5e7d28c40536
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

<<<<<<< HEAD


int largest_number(int a, int b, int c)

{

int largest;



if (a > b && a > c)

{

largest = a;

}

else if (b > c && b > a)

{

largest = b;

}

else if (c > b)

{

largest = c;

=======
int largest_number(int a, int b, int c)
{
int largest;

if (a > b && a > c)
{
	largest = a;
}
else if (b > c && b > a)
{
	largest = b;
}
else if (c > b)
{
	largest = c;
>>>>>>> 4b263b1b3fa70b8ddf625d4bf53c5e7d28c40536
}

else

{
<<<<<<< HEAD

largest = b;

}



return (largest);

=======
	largest = b;
}

return (largest);
>>>>>>> 4b263b1b3fa70b8ddf625d4bf53c5e7d28c40536
}
