desc = raw_input()
l = int(raw_input())
a = list()

while l:
	s = raw_input()
	a.append(s)
	l = l - 1

desc = desc.split(' ')
result = ''

for word in desc:
	if(word in a):
		result+='<b>'
		result+=word
		result+='</b>'
	else:
		result+=word

	result+= ' '

print(result)