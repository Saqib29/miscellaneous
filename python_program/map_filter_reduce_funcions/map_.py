
def operation(number):
    return number*number

lst = [1,2,3,4,5,6,7,8,9]
print(lst)
lst1 = list(map(operation, lst))
print(lst1)
