unused_num = set() # unused number set
num_list = [] # listed numbers are here
in_unable = set() # unable set of increasing
de_unable = set() # unable set of decreasing
row = 0 # row number.
latest_top = -1
if __name__ == "__main__":
    i = int(input())
    unused_num = set(range(i))
    while(len(num_list) != i):
        available_num = sorted([a for a in unused_num if a - row not in in_unable and a + row not in de_unable and a > latest_top])
        if(len(available_num) == 0):
            row -= 1
            top = num_list[len(num_list) - 1]
            num_list = num_list[:len(num_list) - 1]
            in_unable -= set([top - row])
            de_unable -= set([top + row])
            unused_num |= set([top])
            latest_top = top
        else:
            num_list.append(available_num[0])
            in_unable |= set([available_num[0] - row])
            de_unable |= set([available_num[0] + row])
            unused_num -= set([available_num[0]])
            row += 1
            latest_top = -1
    for b in num_list:
        print(b + 1)