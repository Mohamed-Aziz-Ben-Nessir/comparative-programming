def modulo(s,n):
    return s & (n-1)

def isPowerOfTwo(s):
    return s & (s-1)

def turnOffLastBit(S):
    return (S & (S - 1))

def turnOnLastZero(S):
    return ((S) | (S + 1))

def turnOffLastConsecutiveBits(S):
    return ((S) & (S + 1))

def turnOnLastConsecutiveZeroes(S):
    return ((S) | (S-1))



