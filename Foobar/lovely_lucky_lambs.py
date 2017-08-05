def be_generous(lambs):
    prev = 1
    summ = 1
    cnt = 1
    while lambs >= summ + 2*prev:
        summ = summ + 2*prev
        prev = 2*prev
        cnt = cnt + 1


    return cnt
    
def be_stingy(lambs):
    prev2 = 0
    prev1 = 1
    cnt = 1
    summ = 1
    
    while summ <= lambs:
        curr = prev2 + prev1
        prev2 = prev1
        prev1 = curr
        cnt = cnt + 1
        summ = summ + curr

    if summ == lambs:
        cnt = cnt -1

    return cnt -1
    

def answer(total_lambs):
    # your code here
    generous = be_generous(total_lambs)
    stingy   = be_stingy(total_lambs)
    
    return stingy - generous 


print(answer(10))
print(answer(143))