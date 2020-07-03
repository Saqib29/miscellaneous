# file = open("testing/project_twitter_data.csv", "r")
#
# lines = file.readlines()
# lines.pop(0)
#
# for line in lines:
#     line = line.strip().split()
#     print(line)

string = "Your task is to build a sentiment classifier, which will detect how positive or negative each tweet is. You will create a csv file, which contains columns for the Number of Retweets, Number of Replies, Positive Score (which is how many happy words are in the tweet), Negative Score (which is how many angry words are in the tweet), and the Net Score for each tweet. At the end, you upload the csv file to Excel or Google Sheets, and produce a graph of the Net Score vs Number of Retweets."

string = string.replace(",", "")
print(string)
