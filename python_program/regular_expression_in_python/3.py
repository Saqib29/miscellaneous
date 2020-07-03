import re

string = 'Twelve:12 Eighty nine:89'
pattern = '\d+'

result = re.split(pattern, string) #maxsplit ensure how many times can be splitted
print(result)

maxSplit = 1
result = re.split(pattern, string, maxSplit)
print(result)

maxSplit = 2
result = re.split(pattern, string, maxSplit)
print(result)