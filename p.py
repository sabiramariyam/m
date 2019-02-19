import itertools
b=str(input())
l=[]
for subset in itertools.permutations(b,len(b)):
    l.append(''.join(subset))
for i in set(l):
    print(i)
