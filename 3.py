print("左下直角二等辺三角形を作ります。")
x=int(input("短辺: "))
for j in range(x):
    for i in range(j):
        print("*",end="")
    print("*")
print("")