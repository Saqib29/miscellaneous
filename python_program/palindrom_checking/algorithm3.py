def is_palindrom(s):

    i = 0
    j = len(s) - 1

    while i < j and s[i] == s[j]:
        i = i + 1
        j = j - 1

    return j <= i

print(is_palindrom('madam'))
print(is_palindrom('racecar'))
print(is_palindrom('soccer'))
