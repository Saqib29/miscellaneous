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
