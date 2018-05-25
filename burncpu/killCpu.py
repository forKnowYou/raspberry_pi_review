import time

while True:
	lastTime = time.time()
	time.sleep(0.0005)
	while ((time.time() - lastTime) < 0.0095):
		pass
