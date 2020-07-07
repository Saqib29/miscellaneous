import wikipedia

topic = input("SEARCH ...")
wikipedia.set_lang('ban')

print(wikipedia.summary(topic))
