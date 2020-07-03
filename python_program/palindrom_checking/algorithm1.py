def reverse(s):
    rev = ''
    for each in s:
        rev = each + rev
    return rev

def is_palindrom(s):
    return s == reverse(s)

print(is_palindrom('madam'))
print(is_palindrom("python"))
print(is_palindrom("mom"))
print(is_palindrom("hello"))
