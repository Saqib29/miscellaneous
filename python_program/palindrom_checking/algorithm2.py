def is_palindrom(s):
    n = len(s)

    return s[:n//2] == reverse(s[n-n//2:])

def reverse(s):
    rev = '';
    for each in s:
        rev = each + rev
    return rev

print(is_palindrom('madam'))
print(is_palindrom('racecar'))
print(is_palindrom('father'))
