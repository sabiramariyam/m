import itertools
a=str(input())
l=[]
for subset in itertools.permutations(a,len(a)):
    l.append(''.join(subset))
for i in set(l):
    print(i)