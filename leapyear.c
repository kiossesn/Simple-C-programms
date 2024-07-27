/* Give a year.
 * Get "Leap" if it's a leap year.
 * Get "Normal" if it's not a leap year.
 */
#include <stdio.h>

int main() {
  int k;
  scanf("%d",&k);
  /*if (k>0)
  { if (k%4==0 &&(k%100!=0 || k%400==0))
      printf("Leap");
    else 
      printf("Normal");
  }
  else 
    printf("Wrong Input");
  */
  if (k>0) {
      if ((k % 4 == 0) && (k % 100 != 0))
          printf("Leap");
      else if ((k % 4 == 0) && (k % 100 == 0)) {
          if (k % 400 == 0)
              printf("Leap");
          else
              printf("Normal");
      } else
          printf("Normal");
  }
  else
      printf("Wrong Input");


}