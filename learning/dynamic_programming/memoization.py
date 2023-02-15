def fib(n, memo = dict()):
    if (n in memo): return memo[n]
    if (n <= 2): return 1
    memo[n] = fib(n - 1, memo) + fib(n - 2, memo)
    return memo[n];

n = int(input())
while(n):
    print(fib(n))
    n = int(input())