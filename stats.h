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
 * @file <stats.h> 
 * @brief <peer graded assignment Week1 >
 *
 * <Course Name: introduction-embedded-systems by Alex Fosdick Sir>
 *
 * @author <Shravan Shukla>
 * @date <23 Jan 2022>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/* Data type definitions*/
typedef unsigned char u8;
typedef   signed char s8;
typedef unsigned short int u16;
typedef   signed short int s16;
typedef unsigned  int u32;
typedef   signed  int s32;


/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <print_statistics() Prints key stats of the input array>
 *
 * <This function  prints following statistics of input array:
 *  minimum, maximum, mean, and median>
 *
 * @param <inputArray> < A unsigned char pointer to an n-element data array>
 * @param <length> <An unsigned integer as the length of the array>
 *
 * @return <none>
 */
 
void print_statistics(u8 *inputArray, u8 length);


/**
 * @brief <print_array() Prints key stats of the input array>
 *
 * <This function  prints prints the input array to the screen>
 *
 * @param <inputArray> < A unsigned char pointer to an n-element data array>
 * @param <length> <An unsigned integer as the length of the array>
 *
 * @return <none>
 */
 
void print_array(u8 *inputArray, u8 length);


/**
 * @brief <find_median() finds median of the input array>
 *
 * <Given an array of data and a length, returns the median value>
 *
 * @param <inputArray> < A unsigned char pointer to an n-element data array>
 * @param <length> <An unsigned integer as the length of the array>
 *
 * @return <median as unsigned char>
 */

u8 find_median(u8 *inputArray, u8 length);


/**
 * @brief <find_mean() finds mean of the input array>
 *
 * <Given an array of data and a length, returns the mean value>
 *
 * @param <inputArray> < A unsigned char pointer to an n-element data array>
 * @param <length> <An unsigned integer as the length of the array>
 *
 * @return <mean as unsigned char>
 */

u8 find_mean(u8 *inputArray, u8 length);


/**
 * @brief <find_maximum() finds maximum of the input array>
 *
 * <Given an array of data and a length, returns the maximum value>
 *
 * @param <inputArray> < A unsigned char pointer to an n-element data array>
 * @param <length> <An unsigned integer as the length of the array>
 *
 * @return <max as unsigned char>
 */

u8 find_maximum(u8 *inputArray, u8 length);


/**
 * @brief <find_minimum() finds maximum of the input array>
 *
 * <Given an array of data and a length, returns the minimum value>
 *
 * @param <inputArray> < A unsigned char pointer to an n-element data array>
 * @param <length> <An unsigned integer as the length of the array>
 *
 * @return <min as unsigned char>
 */

u8 find_minimum(u8 *inputArray, u8 length);


/**
 * @brief <sort_array() finds maximum of the input array>
 *
 * <Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value>
 *
 * @param <inputArray> < A unsigned char pointer to an n-element data array>
 * @param <length> <An unsigned integer as the length of the array>
 *
 * @return <null>
 */
void sort_array(u8 *inputArray, u8 length);


#endif /* __STATS_H__ */
