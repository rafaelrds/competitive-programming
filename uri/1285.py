while True:
    try:
        N, M = map(int, raw_input().split())
        print N, M

        ans = 0
        for num in xrange(N, M+1):
            if (len(set(map(int, str(num)))) == len(str(num))):
                ans += 1
        print ans
    except:
        break
