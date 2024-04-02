def trapezoid(array_len):
    a, b = array_len[1], array_len[3]
    c, d = array_len[0], array_len[2]
    area_of_trapezoid = ((a + b) / 2) * (c**2 - (((b - a)**2 + c**2 - d**2) / (2 * (b - a)))**2) ** (0.5)
    #print(f"Perimeter: {sum(array_len)}\nSquare: {area_of_trapezoid}\nMidline lenth: {(a + b) / 2}\n")
    #return response_array
    return sum(array_len), area_of_trapezoid, (a + b) / 2

array = list(map(int, input().split()))
print(trapezoid(array)[1])


'''
array = list(map(int, input().split()))
output_array = trapezoid(array)
print(f"Perimeter: {output_array[0]}\nSquare: {round(output_array[1], 5)}\nMidline lenth: {round(output_array[2], 5)}\n")'''