import os

os.system("g++ -o validator validator.cpp -std=c++0x")

for i in range(1, 41):
	s = "./validator < " + str(i) + ".in"
	print(s)
	os.system(s)

os.system("rm validator")
