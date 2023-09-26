#include <stdio.h>
  
  void main() {
  int status = 0;
  int x, y;
  int countX = 0;
  int countY = 0;
  scanf("%d %d", &x, &y);
  while(1) {
 int k;
 scanf("%d", &k);
 if(k <= 0)
 break;
 if(k % x == 0 && k % y == 0) {
 if(status == 0)
 status = 1;
 }
 if(k % x == 0) {
 ++countX;
 if(status == 0)
 status = 2;
 }
 if(k % y == 0) {
 ++countY;
 if(status == 0)
 status = 3;
 }
 }
 printf("%d\n%d\n", countX, countY);
if(status == 1)
 printf("xy");
 else if(status == 2)
 printf("x");
 else if(status == 3)
 printf("y");
 }