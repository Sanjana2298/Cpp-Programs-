import re
def answer(s):
    # your code here
    length = len(s)
    for i in range(length):
        substr = s[:i+1]
        cnt = 0
        for m in re.finditer( substr, s):
            cnt = cnt + 1
            
        if cnt*len(substr) == length:
            break
    
    return cnt


print(answer("abccbaabccba"))
print(answer("abcd"))