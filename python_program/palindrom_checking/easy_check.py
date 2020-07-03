def is_palindrom(s):
    return s == s[::-1]

print(is_palindrom('madam'))
print(is_palindrom('father'))
print(is_palindrom('racecar'))
print(is_palindrom('soccer'))
