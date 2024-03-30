firstPar=float(input("Введите первую сторону: "))
secondPar=float(input("Введите вторую сторону: "))
thirdPar=float(input("Введите третью сторону: "))

if((firstPar + secondPar > thirdPar and firstPar + thirdPar > secondPar and secondPar + thirdPar > firstPar) or (firstPar>0 and secondPar>0 and thirdPar>0)):
    Perimetr=firstPar+secondPar+thirdPar
    semiPer=Perimetr/2
    Square=(semiPer*(semiPer-firstPar)*(semiPer-secondPar)*(semiPer-thirdPar))**0.5
    print(Perimetr)
    print(Square)
    if((firstPar==secondPar and firstPar!=thirdPar) or (firstPar==thirdPar and firstPar!=secondPar) or (secondPar==thirdPar and secondPar!=firstPar)):
        print("Triangle is isosceles")
    else:
        print("Triangle is not isosceles")
   
else:
    print("UNCORRECT")

#Треугольник – периметр, площадь по формуле Герона, проверка
#на равнобедренность;