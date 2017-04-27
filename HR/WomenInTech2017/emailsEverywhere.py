l = int(raw_input())
x = list()
y = list()
s = list()
p = list()

while l:
	a = raw_input()
	a = a.split(' ')
	if(a[0] == 'store'):
		
		x.append(a[1])
		y.append(a[2])
		s = [X for (Y,X) in sorted(zip(y,x))]
		p = [Y for (Y,X) in sorted(zip(y,x))]

	else:
		if(len(s) > 0):
			content = s.pop()
			priority = p.pop()
			x.remove(content)
			y.remove(priority)
			print(content)
		else:
			print("-1")
	l = l -1
