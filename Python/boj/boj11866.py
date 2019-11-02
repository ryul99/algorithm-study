N, K = map(int, input().split(' '))
idx = 0
people = list(range(1, N+1))
print('<', end='')
while len(people) > 0:
    idx += 1
    tmp = people[0]
    if idx == K:
        people = people[1:]
        idx = 0
        print(tmp, end='')
        if len(people) > 0:
            print(', ', end='')
        continue
    people = people[1:]
    people.append(tmp)
print('>', end='')