import wikipedia

topic = input("Search... ")
result = wikipedia.page(topic)

print(result.summary)

for link in result.links:
    print(link)
