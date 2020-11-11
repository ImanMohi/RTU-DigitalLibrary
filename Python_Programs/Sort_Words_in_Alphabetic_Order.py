# -*- coding: utf-8 -*-
"""
Created on Fri Oct 30 22:03:00 2020

@author: Sumit
"""
# Program to sort alphabetically the words form a string provided by the user

my_str = input()

# To take input from the user
#my_str = input()//enter a string

# breakdown the string into a list of words
words = [word.lower() for word in my_str.split()]

# sort the list
words.sort()

# display the sorted words

print("The sorted words are:")
for word in words:
   print(word)