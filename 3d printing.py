for x in range(int(input())):
    total = 1000000
    list1 = []
    for i in range(3):
        list1.append([int(_) for _ in input().split()])
    start = 1
    d = [0]*4
    a = [0]*4
    for i in range(4):
        t = min(list1[0][i], list1[1][i], list1[2][i])
        a[i] = t
    if sum(a) > total:
        t = 0
        for i in range(4):
            if t <= 1000000:
                t1 = 1000000 - t
                d[a.index(min(a))] = min(t1, min(a))
                t += min(t1, min(a))
            a[a.index(min(a))] = max(a) + 1
        start = 1
    elif sum(a) < total:
        start = 0
    else:
        d = a
        start = 1
    print('Case #{}:'.format(x+1), end = " ")
    if start:
        for i in d:
            print(i, end = ' ')
        print()
    else:
        print('IMPOSSIBLE')
