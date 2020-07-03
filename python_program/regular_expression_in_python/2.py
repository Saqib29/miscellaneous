import re

string = 'hello 12 hi 89. howdy 34'
pattern = '\d+'

result = re.findall(pattern, string)
print(result)