def rect(array_sides):
    perimetr = (array_sides[0] + array_sides[1])*2
    square = array_sides[0] * array_sides[1]
    diagonal = (pow(array_sides[0], 2)+ pow(array_sides[1], 2))**0.5
    return perimetr, square, round(diagonal,5)





