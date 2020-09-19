from wordcloud import WordCloud, ImageColorGenerator
import matplotlib.pyplot as plt
from PIL import Image
import numpy as np

text = ""
with open('example.txt', encoding='utf-8') as f:
    text = ''.join(f.readlines())

##custom_mask = np.array(Image.open("krabby.png"))
wc = WordCloud(width=800, height=400)
wc.generate(text)

##image_colors = ImageColorGenerator(custom_mask)
##wc.recolor(color_func=image_colors)

wc.to_file('output.png')

def imageShow():
    im = Image.open("output.png")
    im.show()


imageShow()
