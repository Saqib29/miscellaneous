from functools import reduce

numbers = [1,2,3,4,5,6]

odd_numbers = filter(lambda n: n%2 == 1, numbers)

squared_odd_numbers = map(lambda n: n*n, odd_numbers)

# for reduce function lambda takes two arguements
# one is accumulator and anather individual elements itself
total = reduce(lambda acc, n: acc+n, squared_odd_numbers)

print(list(squared_odd_numbers))
print(total)
