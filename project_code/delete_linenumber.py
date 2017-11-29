#!/usr/bin/python

import re
l1=[]
f=open('PCB','r+')
f1=open('DELETE.txt','w+')


l=f.readlines()

for i in l:
	try:
		l1.append((re.search(r'(?<=\d{4}).*',i)).group())
	except:
		l1.append(i)

print l1

for i in l1:
	f1.write(i)
	f1.write('\n')

