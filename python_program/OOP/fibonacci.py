def fib(num):
    List = [0,1]
    while len(List) < num+1:
        List.append(0)
    for i in range(2, num+1):
        List[i] = List[i-2] + List[i-1]
    return List[num]

print(fib(9))
