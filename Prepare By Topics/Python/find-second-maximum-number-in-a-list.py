if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())

    lst = []
    for i in arr:
        lst.append(i)
    lst.sort(reverse=True)

    for r in lst:
        if r != lst[0]:
            print(r)
            break
