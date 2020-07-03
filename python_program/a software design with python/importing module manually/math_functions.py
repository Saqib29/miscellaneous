"""
List Functions
"""

def get_max(Lst):
    mx = float("-inf")
    for num in Lst:
        if num > mx:
            mx = num

    return mx
def get_min(Lst):
    mn = float("inf")
    for num in Lst:
        if num > mn:
            mn = num
    return mn

def get_avarage(Lst):
    return sum(Lst) / len(Lst)

def get_median(Lst):
    lst = sorted(Lst)

    if len(lst)%2 == 0:
        return (lst[(len(lst)/2)-1] + lst[(len(lst)/2)]) / 2
    else:
        return lst[(len(lst)/2)]

"""
Hash Table Functions
"""
    
def get_keys(ht):
    return ht.keys()

def has_key(ht, key):
    return key in ht

def max_value(ht):
    mx = float("-inf")
    for k, v in ht.items():
        if v > mx:
            mx = v
    return mx

def min_value(ht):
    mn = float("-inf")
    for k, v in ht.items():
        if v < mn:
            mn = v
    return mn
