/**
 *swap_int - swap the values of the variables
 *
 *@a: input pointer
 *@b: input pointer
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
  int c;
  c=*a;
  *a=*b;
  *b=c;
}
