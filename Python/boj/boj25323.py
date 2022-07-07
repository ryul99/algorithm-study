from math import isqrt

def gcd(a: int, b: int):
    while True:
        c = a % b
        if c == 0:
            return b
        a = b
        b = c

def main():
    input()
    l = list(map(int, input().split()))
    l2 = sorted(l)
    for e, e2 in zip(l, l2):
        g = gcd(e, e2)
        m = (e // g) * (e2 // g)
        if m != pow(isqrt(m), 2):
            print("NO")
            return
    print("YES")
    return

if __name__ == "__main__":
    main()