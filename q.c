#include<stdio.h>
 
void Tower(int n, char x, char y, char z);
 
int main() {
   int n;
   printf("\nEnter number of plates:");
   scanf("%d", &n);
 
   Tower(n - 1, 'A', 'B', 'C');
   return (0);
}
 
void Tower(int n, char x, char y, char z) {
   if (n > 0) {
      Tower(n - 1, x, z, y);
      printf("\n%c -> %c", x, y);
      Tower(n - 1, z, y, x);
   }
}
