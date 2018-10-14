import os

print("hw1-1 testing...")
os.system("g++ -o hw1-1 hw1-1.cpp -std=c++0x")

for i in range(1, 41):
	s = "./hw1-1 < testdata_1/" + str(i) + ".in > testdata_1/" + str(i) + ".out"
	os.system(s)
	t = "./checker-1 testdata_1/" + str(i) + ".in testdata_1/" + str(i) + ".out"
	os.system(t)

os.system("rm hw1-1")
os.system("rm testdata_1/*.out")

print("hw1-2 testing...")
os.system("g++ -o hw1-2 hw1-2.cpp -std=c++0x")

for i in range(1, 41):
	s = "./hw1-2 < testdata_2/" + str(i) + ".in > testdata_2/my" + str(i) + ".out"
	os.system(s)
	t = "./checker-2 testdata_2/" + str(i) + ".in testdata_2/" + str(i) + ".out testdata_2/my" + str(i) + ".out"
	os.system(t)

os.system("rm hw1-2")
os.system("rm testdata_2/my*.out")
