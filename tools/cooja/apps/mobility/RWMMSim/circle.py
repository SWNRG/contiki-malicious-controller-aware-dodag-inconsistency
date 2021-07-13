'''
A simple way to plot evenly-spaced points along the perimeter of a circle begins with dividing the whole circle into equally small angles where the angles from circle's center to all points are obtained. Then, the coordinates (x,y) of each point can be computed. Here is the code that does the task:
'''

import matplotlib.pyplot as plt
import numpy as np

fig = plt.figure(figsize=(8, 8))

n_dots = 120   # set number of dots
angs = np.linspace(0, 2*np.pi, n_dots)  # angles to the dots
cx, cy = (120, 120)  # center of circle
xs, ys = [], []    # for coordinates of points to plot
ra = 160.0          # radius of circle
counter=0

for ang in angs:
	# compute (x,y) for each point
	x = cx + ra*np.cos(ang)
	y = cy + ra*np.sin(ang)
	xs.append(x)   # collect x
	ys.append(y)   # collect y
	counter+=0.2
	print "1", counter,x,y
plt.scatter(xs, ys, c = 'red', s=5)  # plot points 
#plt.show()
