import sys

path = "C:\\Users\\fyj\\nw\\self_driving_car-master\\courses\\w04_py\\d04\\"


f = open(path+"mytext.txt", "r")  #  "mytext.txt" == sys.argv[1] 

mystr = f.read()

mylist = mystr.split(" ")

print(mylist)
mylist_cnv = {}
for s in mylist:
	tmp = s.strip()
	if tmp in mylist_cnv:
		mylist_cnv[tmp] = mylist_cnv[tmp] + 1
	else:
		mylist_cnv[tmp] = 1

print(len(mylist_cnv))
print(mylist_cnv)
