if __name__ == "__main__":
    N = int(input())
    a = list(input())
    o = ''
    for i in range(N-1):
        qqq = input()
        for j in range(len(a)):
            if (a[j] != qqq[j]):
                a[j] = '?'
    for i in a:
        o += i
    print(o)