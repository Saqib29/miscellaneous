import wikipedia
import speech_recognition as sr

r = sr.Recognizer()

with sr.Microphone() as mic:
    print("say .. ")
    r.adjust_for_ambient_noise(mic, 2)
    audio = r.listen(mic)
    try:
        text = r.recognize_google(audio)
        result = wikipedia.summary(text)
        print("search result for ", text)
        print(result,"\n\n")
        print("Suggetions: \n", wikipedia.search(text, results=5))
    except:
        print("Sorry, couldn't proceed!")
