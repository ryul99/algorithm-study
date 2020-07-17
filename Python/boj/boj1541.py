def main():
    input_string = input().split('-')
    total = 0
    for idx, input_substring in enumerate(input_string):
        e = 1 if idx == 0 else -1
        sum_num = sum(list(map(int, input_substring.split('+'))))
        total += e * sum_num
    print(total)


if __name__ == "__main__":
    main()
