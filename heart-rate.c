// Adrian Lobo
// Sept 30, 2020
// Heart rate program

#define __CRT__SECURE__NO_WARNINGS // Suppress warnings
#include <stdio.h> // printf & scanf

int main() {
  int pulse; // 10-seconds hear rate
  int rest_heart_rate; // heart rate for one minute

  // Prompt and input 10-second rate
  printf("\nEnter pulse rate for 10 seconds: ");
  scanf("%d", &pulse);

  // Calculate heart rate for one minute
  rest_heart_rate = pulse * 6;
  printf("\nYour rest heart rate is is %d.", rest_heart_rate);

  // Display message depending on rest heart rate
  if (rest_heart_rate > 75)
    printf("\nKeep up your exercise program!");
  else 
   printf("\nYour doing great!");
}
