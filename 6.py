def quadratic(a,b,c):
    x1 = (-b+(b*b-4*a*c**0.5))/2*a
    x2 = (-b-(b*b-4*a*c**0.5))/2*a
    return(x1,x2)

a = int (input("aを入力してください："))
b = int (input("bを入力してください："))
c = int (input("cを入力してください："))
print(quadratic(a,b,c))