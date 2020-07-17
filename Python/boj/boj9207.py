from copy import deepcopy

direction = ((-1, 0), (1, 0), (0, -1), (0, 1))


def min_max(i, bound):
    return max(min(i, bound), 0)


def best_choice(map, pin_position, stack):
    flag = True
    result = list()
    for pin_i, pin_j in pin_position:
        for dir_i, dir_j in direction:
            one_i = min_max(pin_i + dir_i, 4)
            one_j = min_max(pin_j + dir_j, 8)
            two_i = min_max(pin_i + 2 * dir_i, 4)
            two_j = min_max(pin_j + 2 * dir_j, 8)
            if map[one_i][one_j] == 'o' and map[two_i][two_j] == '.':
                new_pin_position = deepcopy(pin_position)
                new_map = deepcopy(map)
                new_pin_position.remove((pin_i, pin_j))
                new_map[pin_i][pin_j] = '.'
                new_pin_position.remove((one_i, one_j))
                new_map[one_i][one_j] = '.'
                new_pin_position.append((two_i, two_j))
                new_map[two_i][two_j] = 'o'
                # for row in new_map:
                #     print(row)
                # print(new_pin_position)
                # print()
                result.append(best_choice(
                    new_map, new_pin_position, stack + 1))
                flag = False
    if flag:
        return len(pin_position), stack
    else:
        return min(result)


def main():
    num_testcase = int(input())
    for idx in range(num_testcase):
        map = list()
        pin_position = list()
        for _ in range(5):
            map.append(list(input()))
        for i, row in enumerate(map):
            for j, position in enumerate(row):
                if position == 'o':
                    pin_position.append((i, j))
        print("%d %d" % best_choice(map, pin_position, 0))
        if idx < num_testcase - 1:
            _ = input()


if __name__ == "__main__":
    main()
