# -*- coding: utf-8 -*-
"""
Created on Fri Oct 25 21:48:19 2019

@author: SHUVRA
"""

n=int(input())
word=[]

for i in range (0, n):
    word.append(input())
    
word=sorted(sorted(word), key=str.lower)

for i in word:
    print(i)