n = int(raw_input())
ans = 1
k = 109546051211
for i in range(1,n+1):
	x = (i**(n-i+1))%k
	ans = ((ans%k)*(x%k))%k


print ans