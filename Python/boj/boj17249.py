lr = 0
hand = [0, 0]
for i in input():
    if i == '0':
        lr += 1
    elif i == '@':
        hand[lr] += 1
print(str(hand[0]) + ' ' + str(hand[1]))