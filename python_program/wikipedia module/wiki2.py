import wikipedia

# getting full wikipedia page data
topic = input("Search .... ")
page_object = wikipedia.page(topic)

# printing html of object page_object
print(page_object.html)

#printing title
print(page_object.original_title)

# printing links on that page object
print(page_object.links[:10])
