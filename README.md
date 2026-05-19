# LeetCode Algorithms in C

This repository contains solutions to classic LeetCode problems implemented in C.  
The goal is to practice problem solving, arrays, strings, pointers, linked lists, memory handling, and algorithmic thinking.

---

## 1. Two Sum

Given an array of integers and a target value, the goal is to find two numbers whose sum is equal to the target. The expected output is an array containing the indexes of those two numbers. For example, for `nums = [2,7,11,15]` and `target = 9`, the expected output is `[0,1]`.

---

## 2. Add Two Numbers

This problem receives two numbers represented as linked lists, where each node contains a single digit and the digits are stored in reverse order. The goal is to add both numbers and return the result as a linked list in the same format. For example, `[2,4,3] + [5,6,4]` represents `342 + 465`, and the expected output is `[7,0,8]`.

---

## 3. Longest Substring Without Repeating Characters

Given a string, the goal is to find the length of the longest substring that does not contain repeated characters. The expected output is an integer representing that length. For example, for `"abcabcbb"`, the longest substring without repetition is `"abc"`, so the expected output is `3`.

---

## 4. Median of Two Sorted Arrays

This problem receives two sorted arrays and asks for the median value after combining them. The expected output is a number representing the median. For example, for `nums1 = [1,3]` and `nums2 = [2]`, the combined sorted array is `[1,2,3]`, so the expected output is `2.0`.

---

## 5. Longest Palindromic Substring

Given a string, the goal is to find the longest substring that is a palindrome, meaning it can be read the same way from left to right and from right to left. The expected output is the longest palindromic substring. For example, for `"babad"`, valid outputs include `"bab"` or `"aba"`.

---

## 6. Zigzag Conversion

This problem asks to write a string in a zigzag pattern using a given number of rows, then read the result row by row. The expected output is the converted string. For example, `"PAYPALISHIRING"` with `3` rows becomes `"PAHNAPLSIIGYIR"`.

---

## 7. Reverse Integer

Given a signed integer, the goal is to reverse its digits while respecting the 32-bit signed integer range. The expected output is the reversed integer, or `0` if the result overflows. For example, `123` returns `321`, and `-123` returns `-321`.

---

## 8. String to Integer (atoi)

This problem asks to convert a string into a 32-bit signed integer, following rules similar to the C `atoi` function. The algorithm should ignore leading spaces, handle an optional sign, read valid digits, and stop when a non-digit character appears. The expected output is the converted integer, clamped to the 32-bit range when necessary.

---

## 9. Palindrome Number

Given an integer, the goal is to determine whether it is a palindrome. A number is considered a palindrome if it reads the same forward and backward. The expected output is a boolean value: `true` if the number is a palindrome, and `false` otherwise. For example, `121` returns `true`, while `-121` returns `false`.

---

## 10. Regular Expression Matching

This problem receives a string and a pattern containing special characters such as `.` and `*`. The goal is to determine whether the pattern matches the entire string. The expected output is a boolean value. For example, `s = "aa"` and `p = "a*"` should return `true`, because `*` allows the previous character to repeat.

---

## 11. Container With Most Water

Given an array where each value represents the height of a vertical line, the goal is to find two lines that can contain the largest amount of water together with the x-axis. The expected output is the maximum area possible. For example, for `[1,8,6,2,5,4,8,3,7]`, the expected output is `49`.

---

## 12. Integer to Roman

This problem asks to convert an integer into its Roman numeral representation. The input is an integer within a defined range, and the expected output is a string containing the equivalent Roman numeral. For example, `1994` should return `"MCMXCIV"`.

---

## 13. Roman to Integer

Given a Roman numeral string, the goal is to convert it into its integer value. The algorithm must handle both regular symbols and subtractive cases such as `IV`, `IX`, `XL`, `XC`, `CD`, and `CM`. The expected output is an integer. For example, `"MCMXCIV"` returns `1994`.

---

## 14. Longest Common Prefix

Given an array of strings, the goal is to find the longest prefix shared by all strings. The expected output is that common prefix as a string. If there is no common prefix, the output should be an empty string. For example, `["flower","flow","flight"]` returns `"fl"`.

---
