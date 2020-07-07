import wikipedia

topic = input("Search .... ")
result = wikipedia.page(topic)
print('Summary:')
print(result.summary) # shows summary of the searched topic

# search() attribute shows the suggetion based on the results perameter
print('\nSearch Suggetion:\n')
print(wikipedia.search(topic, results=10))
