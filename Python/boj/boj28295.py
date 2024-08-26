# N = 0, E = 1, S = 2, W = 3
direction = ["N", "E", "S", "W"]

sum = 0

for _ in range(10):
    order = int(input())
    sum += order

d = sum % 4
print(direction[d])
