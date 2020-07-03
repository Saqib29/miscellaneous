from PIL import Image, ImageDraw
import qrcode
data = "Name: Saqib, product no. 7000728"
img = qrcode.make(data)
img.save("saqib_pruduct.png")