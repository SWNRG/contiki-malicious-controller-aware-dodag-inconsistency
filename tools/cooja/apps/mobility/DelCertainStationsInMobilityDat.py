#!/usr/bin/python
try: 
	f = open("6MobStations.dat","r")
	file2write = open("5MobStations.dat","r+")
	for line in f:
		if ( line.startswith('1 ') or line.startswith('2 ') or line.startswith('3 ') or line.startswith('4 ') or line.startswith('5 ') or line.startswith('#')  ):
			file2write.write(line)
	file2write.truncate()
	
	f.close()
	file2write.close()
	
except Exception as (e):
	print("file not found...")
	



