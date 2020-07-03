import pyqrcode
url = pyqrcode.create("http://youtube.com/saqib")
url.svg('youtube-saqib.svg', scale=8)
print(url.terminal(quiet_zone=1))