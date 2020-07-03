
# Here are all the installs and imports you will need for your word cloud script and uploader widget
import wordcloud
import numpy as np
from matplotlib import pyplot as plt
from IPython.display import display
import fileupload
import io
import sys


#This is the uploader widget

def _upload():
    global file_contents
    file = """Everyone knows the importance of a healthy lifestyle. If you have a busy schedule, you may find it hard to make time for regular exercise or find yourself eating a lot of takeout and junk food. But you can’t afford to be passive about your health. Take a proactive approach by following these basic health tips for men.Men are notorious for avoiding the doctor and ignoring unusual symptoms. This may help explain why women tend to live longer. Don’t let complacency take a toll on your health.
    Schedule yearly checkups with your doctor and keep these appointments. Your doctor can help monitor your weight, blood pressure, and the level of cholesterol in your blood. Excess weight, high blood pressure, and high blood cholesterol are risk factors for cardiovascular disease. Your doctor can recommend lifestyle changes, medications, or other treatments to help get your weight, blood pressure, and blood cholesterol under control.Heart disease is the leading cause of death among American men. Regular exercise is one of the best ways to prevent heart disease and keep your ticker strong. It can also help you improve and maintain your overall physical and mental well health.
    Try to get at least 150 minutes of moderate-intensity aerobic exercise, or 75 minutes of vigorous aerobic exercise, every week. For example, schedule five 30-minute long sessions of aerobic exercise in your weekly calendar. Aerobic exercise includes activities such as walking, jogging, swimming, basketball, tennis, and other sports.
    It’s also important to make time for at least two sessions of muscle-strengthening activities per week. For example, weight lifting, rock climbing, and yoga can help you develop stronger muscles.Most people can get the vitamins and minerals needed for optimum health by eating a well-balanced diet. It’s important to eat wide variety of vitamin- and mineral-rich foods, such as fresh fruits, veggies, and whole grains. Many of those foods also provide heart-healthy fiber and natural antioxidant compounds that can help lower your risk of certain diseases.

    Some people may also benefit from taking a daily multivitamin or other supplements. For example, your doctor may encourage you to supplement your diet with fish oil capsules containing omega-3 fatty acids and vitamin D3. Ask your doctor about the potential benefits and risks of adding a multivitamin or other supplements to your daily routine.After skin cancer, prostate cancer is the most common cancer diagnosis among American men, reports the American Cancer Society. If you have trouble urinating, develop pain when you urinate, or notice blood in your urine, it may be a sign of prostate problems. Make an appointment with your doctor. They may encourage you to get blood tests or undergo a prostate exam to check for prostate cancer or other conditions.Colon cancer is the second leading cause of cancer death in the United States, reports the National Cancer InstituteTrusted Source. It’s important to begin screening for colorectal cancer starting around age 50. Your doctor can use a colonoscopy to check for cancerous growths in your colon. They will also check for polyps, a type of noncancerous growth. Certain types of polyps can develop into cancer at a later time. Ask your doctor how often you should have a colonoscopy conducted."""
    file_contents = file

_upload()

def calculate_frequencies(file_contents):
    # Here is a list of punctuations and uninteresting words you can use to process your text
    punctuations = '''!()-[]{};:'"\,<>./?@#$%^&*_~'''
    uninteresting_words = ["the", "a", "to", "if", "is", "it", "of", "and", "or", "an", "as", "i", "me", "my", \
    "we", "our", "ours", "you", "your", "yours", "he", "she", "him", "his", "her", "hers", "its", "they", "them", \
    "their", "what", "which", "who", "whom", "this", "that", "am", "are", "was", "were", "be", "been", "being", \
    "have", "has", "had", "do", "does", "did", "but", "at", "by", "with", "from", "here", "when", "where", "how", \
    "all", "any", "both", "each", "few", "more", "some", "such", "no", "nor", "too", "very", "can", "will", "just"]
    
    # LEARNER CODE START HERE
    
    file_contents = file_contents.lower()
    sentences = ""
    for c in file_contents:
        if c.isalpha() or c == " ":
            sentences += c
    file_contents = sentences
    print(file_contents)
    for p in punctuations:
        if p in file_contents:
            file_contents = file_contents.split(p)
            file_contents = " ".join(file_contents)
            
    file_contents = file_contents.split()
    dic  = {}
    
    for word in file_contents:
        if word not in dic.keys():
            dic[word] = 0
        dic[word] += 1
        
    word_friquency = {}
    for word in dic.keys():
        if word not in uninteresting_words:
            word_friquency[word] = dic[word]
    
    
    #wordcloud
    cloud = wordcloud.WordCloud()
    cloud.generate_from_frequencies(word_friquency)
    return cloud.to_array()



# Display your wordcloud image

myimage = calculate_frequencies(file_contents)
plt.imshow(myimage, interpolation = 'nearest')
plt.axis('off')
plt.show()
