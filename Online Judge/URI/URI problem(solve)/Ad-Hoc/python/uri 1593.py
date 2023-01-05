# -*- coding: utf-8 -*-
"""
Created on Thu Jun 18 03:38:12 2020

@author: SHUVRA
"""

n=int(input())
while(n>0):
    num=int(input())
    num=bin(num)
    ans=0
    for i in num:
        if(i=='1'):
            ans=ans+1
    print (ans)
    n=n-1