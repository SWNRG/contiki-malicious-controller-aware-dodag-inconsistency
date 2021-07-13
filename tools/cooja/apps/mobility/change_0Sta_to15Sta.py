#!/usr/bin/python
import os

file2read = "15sta-2hrs.dat"
file2write = './15sta-2hrs-noSink.dat'
try:
	file2read = open(file2read,"r")
	if os.path.exists(file2write):
		append_write = 'a' # append if already exists
	else:
		append_write = 'w' # make a new file if not
	file2write = open(file2write,append_write)
	
	for line in file2read:
		if ( line.startswith('0 ')):
			line="15 "+line[2:]
			print (line)
		file2write.write(line)
	file2write.truncate()

	file2read.close()
	file2write.close()
	
except Exception as (e):
	print("file not found...")
	



