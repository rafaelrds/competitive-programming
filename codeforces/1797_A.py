def f(x, y, n, m):
    if (x == 1 or x == n) and (y == 1 or y == m):
        return 2
    if (x == 1 or x == n) or (y == 1 or y == m):
        return 3
    return 4

if __name__ == "__main__":
    cases = int(input())
    while cases > 0:
        cases -= 1
        n, m = map(int, input().split())
        x1, y1, x2, y2 = map(int, input().split())
        print(min(f(x1, y1, n, m), f(x2, y2, n, m)))
