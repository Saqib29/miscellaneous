punctuations = '''!()-[]{};:'"\,<>./?@#$%^&*_~'''
uninteresting_words = ["the", "a", "to", "if", "is", "it", "of", "and", "or", "an", "as", "i", "me", "my", \
    "we", "our", "ours", "you", "your", "yours", "he", "she", "him", "his", "her", "hers", "its", "they", "them", \
    "their", "what", "which", "who", "whom", "this", "that", "am", "are", "was", "were", "be", "been", "being", \
    "have", "has", "had", "do", "does", "did", "but", "at", "by", "with", "from", "here", "when", "where", "how", \
    "all", "any", "both", "each", "few", "more", "some", "such", "no", "nor", "too", "very", "can", "will", "just"]

file = open("words.txt", "r")
sentences = file.readlines()
sentences = " ".join(sentences)
sent = ""


for s in sentences:
    if s.isalpha() or s == " ":
        sent += s
sent = sent.lower()       
sent = sent.split()

dic = {}

for word in sent:
    if word not in dic:
        dic[word] = 0
    dic[word] += 1


words = {}
for word in dic:
    if word not in uninteresting_words:
        words[word] = dic[word]

print(words)


###
file_contents = file_contents.lower()
    sentences = ""
    for c in file_contents:
        if c.isalpha() or c == " ":
            sentences += c
    file_contents = sentences
    
    for p in punctuations:
        if p in file_contents:
            file_contents = file_contents.split(p)
            file_contents = " ".join(file_contents)
            
    file_contents = file_contents.split()
    dic  = {}
    for word in file_contents:
        if word not in dic:
            dic[word] = 0
        dic[word] += 1
    words_dic = {}
    for word in dic:
        if word not in uninteresting_words:
            words_dic[word] = dic[word]
###
