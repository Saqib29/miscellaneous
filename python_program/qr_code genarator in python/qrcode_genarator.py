from PIL import Image, ImageDraw
import qrcode
data = "saqib.com"
img = qrcode.make(data)
img.save("saqib.png")