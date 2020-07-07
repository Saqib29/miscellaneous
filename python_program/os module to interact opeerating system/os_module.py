import os
import datetime

# os.rename(old_name, new_name)
# os.remove(filename)
print('Exits: ',os.path.exists('areas.py'))       # os.path.extsts('file_name')
print('Size: ',os.path.getsize('areas.py'))      # os.path.getsize('file_name')

print('modified time: ',os.path.getmtime('areas.py'))      # os.path.getmtime('file_name')
# this time is called timestamp, it's actually UNIX timestyamp
# to modify it to make it readable datetime modul;e should use

timestamp = os.path.getmtime('areas.py')
date = datetime.datetime.fromtimestamp(timestamp)
print('Date: ',date)
