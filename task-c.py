try:
    array_of_length_values = map(float, input("Enter side values ").split())
    choice_option = int(input("1. Периметр \n2. Площадь \n3. Длина средней линии \n"))
    match choice_option:
        case 1:
            print(sum(array_of_length_values))
        case 2:
            print(*array_of_length_values)
except ValueError:
    print("Incorrect data")
