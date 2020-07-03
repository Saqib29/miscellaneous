
file = open("files/project_twitter_data.csv", "r")


wrt = open("files/write_something.csv", "w")
for line in file:
    line = line.strip()
    wrt.write("1,"+line.strip()+"\n")
wrt.close()

print("\n\n\n Now Read File")
with open("files/write_something.csv", "r") as read:
    for line in read:
        print(line)

file.close()
