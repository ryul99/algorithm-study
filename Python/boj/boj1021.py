N, M = map(int, input().split(' '))
idx_list = list(map(int, input().split(' ')))
pointer = 0
out = 0
deq = list(range(1, N + 1))

for i, idx in enumerate(idx_list):
    right_move = 0
    left_move = 0
    tmp_pointer = pointer % len(deq)
    while deq[tmp_pointer] != idx:
        right_move += 1
        tmp_pointer = (tmp_pointer + 1) % len(deq)
    tmp_pointer = pointer % len(deq)
    while deq[tmp_pointer] != idx:
        left_move += 1
        tmp_pointer = (tmp_pointer - 1) % len(deq)
    out += min(left_move, right_move)
    del deq[tmp_pointer]
    pointer = tmp_pointer
print(out)