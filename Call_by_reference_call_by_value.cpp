#include <stdio.h>
 
void swapByValue(int, int);
 
int main()
{
  int n1 = 10;
  int n2 = 20;

  swapByValue(n1, n2);
  printf("n1: %d, n2: %d\n", n1, n2);
}
 
void swapByValue(int a, int b)
{
  int t;
  t = a; 
  a = b; 
  b = t;
}
 
#OUTPUT -> n1: 10, n2: 20

#include <stdio.h>
 
void swapByReference(int*, int*); 
 
int main(){
  int n1 = 10;
  int n2 = 20;
 
  swapByReference(&n1, &n2);
  printf("n1: %d, n2: %d\n", n1, n2);
}
 
void swapByReference(int *a, int *b)
{
  int t;
  t = *a;
  *a = *b;
  *b = t;
}
 
# OUTPUT -> n1: 20, n2: 10
