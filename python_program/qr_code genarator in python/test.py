import qrcode
qr=qrcode.QRCode(
	version=1,
	box_size=20,
	border=1
)
data="I'm Saqib"
qr.add_data(data)
qr.make(fit=True)
img=qr.make_image(fill="blue", back_color="blue")
img.save("1.png")