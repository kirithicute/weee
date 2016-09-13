#include<stdio.h>
 
void T(int n, char x, char y, char z);
 
int main() {
   int n;
   printf("\nEnter number of plates:");
   scanf("%d", &n);
 
   T(n - 1, 'A', 'B', 'C');
   return (0);
}
 
void T(int n, char x, char y, char z) {
   if (n > 0) {
      T(n - 1, x, z, y);
      printf("\n%c -> %c", x, y);
      T(n - 1, z, y, x);
   }
}
