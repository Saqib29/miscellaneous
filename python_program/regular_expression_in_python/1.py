# easy tests
import re

pattern = '^a...s$'
test_string = 'abyss'

result = re.match(pattern, test_string)

if result:
	print("Search Successfull.")
else:
	print("Search unsuccessfull")