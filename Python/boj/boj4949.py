def check(s):
    cnt = 0
    big_cnt = 0
    stack = [0]
    for c in s:
        if c == '(':
            cnt += 1
        elif c == ')':
            cnt -= 1
        elif c == '[':
            big_cnt += 1
            stack.append(cnt)
        elif c == ']':
            big_cnt -= 1
            if stack:
                if cnt != stack[-1] or cnt < 0:
                    return False
                stack = stack[:-1]
            else:
                return False
        if (stack and cnt < stack[-1]) or big_cnt < 0:
            return False
    return cnt == 0 and big_cnt == 0

def main():
    inp = input()
    while inp != '.':
        res = check(inp)
        if (res):
            print('yes')
        else:
            print('no')
        inp = input()

main()