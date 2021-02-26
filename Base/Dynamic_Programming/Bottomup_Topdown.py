# Fibonacci Example

# 1. Bottom up: Tablulation

def fib(n):
  dp[0]=0
  dp[1]=1
  
  for i in range(2,n+1):
    dp[i]=dp[i-1]+dp[i-2]
  return dp[n]

# 2. Top-downw : Memoization

def fib(n):
  if n<=1:
    return n
  if dp[n]:
    return dp[n]
  dp[n]=fib(n-1)+fib(n-2)
  
  return dp[n]
