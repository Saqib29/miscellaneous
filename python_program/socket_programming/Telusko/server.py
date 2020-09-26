import socket

s = socket.socket()
print("Socket connected")

# bind() only need for sever
# ip address used as this machine works as both server and client
s.bind(('localhost', 9999))  # two argument.. 1. ip address, 2. port number(use port as wish)
# the port number range (0-65535). don't use port numbers in thousands because all those port numbers are busy

# this time we consider 3 connection, so, we added 3 as perameter
s.listen(3)
print("waiting for connections")

connection = 0
while True:
    c, addr = s.accept()  # accept() will get client conncetions and address
    name = c.recv(1024).decode()
    connection += 1
    print("Connected with ", addr, name)

    c.send(bytes("welcome {} to Saqib's world".format(name), 'utf-8'))

    c.close()

    if connection > 3:
        break
    
