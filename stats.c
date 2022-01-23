/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <peer graded assignment Week1 >
 *
 * <Course Name: introduction-embedded-systems by Alex Fosdick Sir>
 *
 * @author <Shravan Shukla>
 * @date <23 Jan 2022>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test,SIZE);
  print_statistics(test,SIZE);

  sort_array(test,SIZE);

  print_array(test,SIZE);
  print_statistics(test,SIZE);
  
}

/* Add other Implementation File Code Here */


 
void print_statistics(u8 *inputArray, u8 length){

}

 
void print_array(u8 *inputArray, u8 length){
}



u8 find_median(u8 *inputArray, u8 length){

  return 0;
}



u8 find_mean(u8 *inputArray, u8 length){

  return 0;
}




u8 find_maximum(u8 *inputArray, u8 length){

  return 0;
}



u8 find_minimum(u8 *inputArray, u8 length){

  return 0;
}



void sort_array(u8 *inputArray, u8 length){
}

