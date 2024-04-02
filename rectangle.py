def rect(array_sides):
    perimetr = (array_sides[0] + array_sides[1])*2
    square = array_sides[0] * array_sides[1]
    diagonal = sqrt(pow(array_sides[0], 2)+ pow(array_sides[1], 2))
    return perimetr, square, diagonal

sas = []
a = int(input())
b = int(input())
sas.append(a)
sas.append(b)
xo = rect(sas)
print(xo)


