import itertools
s=str(input())
l=[]
for subset in itertools.permutations(s,len(s)):
    l.append(''.join(subset))
for i in set(l):
    print(i)