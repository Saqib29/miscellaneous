# search
import re

string = "Python is fun"

match = re.search('\APython', string)

if match:
	print("pattern found inside the string")
else:
	print("pattern not found")