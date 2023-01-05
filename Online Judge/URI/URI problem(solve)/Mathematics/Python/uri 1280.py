def haveToPay(m,n):
    if m==0:
        return n+1
    elif m==1:
        return n+2
    elif m==2:
        return (2*n)+3
    elif m==3:
        return (2**(n+3))-3
    else:
        if n==0:
            return haveToPay(m-1,1)
        else:
            return haveToPay(m-1,haveToPay(m,n-1))

t=int(input())
for i in range(t):
    m, n = map(int,input().split())
    pay=haveToPay(m,n)
    print(pay)





