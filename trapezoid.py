try:
    array_of_length_values = list(map(float, input("Enter side values ").split()))
    choice_option = int(input("1. Периметр \n2. Площадь \n3. Длина средней линии \n"))
    match choice_option:
        case 1:
            print(sum(array_of_length_values))
        case 2:
            a, b = array_of_length_values[1], array_of_length_values[3]
            c, d = array_of_length_values[0], array_of_length_values[2]
            area_of_trapezoid = ((a + b) / 2) * (c**2 - (((b - a)**2 + c**2 - d**2) / (2 * (b - a)))**2) ** (0.5)
            print(area_of_trapezoid)
        case 3:
            print((array_of_length_values[1] + array_of_length_values[3]) / 2)
except ValueError:
    print("Incorrect data")