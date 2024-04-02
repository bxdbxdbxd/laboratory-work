import rectangle
import trapezoid

def correct_inp(mas):
    err = True
    for i in mas:
        if i < 0:
            err = False
    return err


while(1):
    match(input("Select a shape: \n1. Rectangle\n2. Triangle\n3. Trapezoid\n\n0 - Exit\n")):
        case("1"):
            try:
                array = list(map(float, input("Enter the height and width of the rectangle: ").split()))
                if (correct_inp(array) and len(array) == 2):
                    print(f"\nPerimeter: {rectangle.rect(array)[0]}\nSquare: {rectangle.rect(array)[1]}\nDiagonal: {rectangle.rect(array)[2]}\n")
                else:
                    print("\nNegative number or a lot of munbers\n")
            except:
                print("\nUNCORRECT\n")
        case("2"):
            try:
                firstPar=float(input("Введите первую сторону: "))
                secondPar=float(input("Введите вторую сторону: "))
                thirdPar=float(input("Введите третью сторону: "))

                if((firstPar + secondPar > thirdPar and firstPar + thirdPar > secondPar and secondPar + thirdPar > firstPar) or (firstPar>0 and secondPar>0 and thirdPar>0)):
                    Perimetr=firstPar+secondPar+thirdPar
                    semiPer=Perimetr/2
                    Square=(semiPer*(semiPer-firstPar)*(semiPer-secondPar)*(semiPer-thirdPar))**0.5
                    print(f"\nPerimeter: {Perimetr}")
                    print(f"Square: {Square}")
                    if((firstPar==secondPar and firstPar!=thirdPar) or (firstPar==thirdPar and firstPar!=secondPar) or (secondPar==thirdPar and secondPar!=firstPar)):
                        print("Triangle is isosceles\n")
                    else:
                        print("Triangle is not isosceles\n")
                
                else:
                    print("\nUNCORRECT\n")
            except:
                print("\nUNCORRECT\n")
        case("3"):
            try:
                array = list(map(float, input("Enter the sides of the trapezoid(side, top base, side, bottom base): ").split()))
                if (correct_inp(array) and len(array) == 4 and array[1] < array[3]):
                    print(f"\nPerimeter: {trapezoid.trapezoid(array)[0]}\nSquare: {trapezoid.trapezoid(array)[1]}\nMidline lenth: {trapezoid.trapezoid(array)[2]}\n")
                else:
                    print("\nNegative number, a lot of munbers or wrong set of sides\n")
            except:
                print("\nUNCORRECT\n")
        case("0"):
            break
        case _:
            print("\nError\n")
