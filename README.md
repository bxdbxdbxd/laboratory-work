# Геометрические фигуры
В этом проекте реализованы функции для вычисления параметров трех геометрических фигур: прямоугольника, треугольника и трапеции. Каждая функция выполняет определенные расчеты для соответствующей фигуры. Реализация решения задач осуществлена на C++ и Python.
## Описание
#### Прямоугольник:
-- C++ --
- Функции:
  1. Perimetr(double length, double width): вычисляет периметр прямоугольника по длине и ширине.
  2. Square(double length, double width): вычисляет площадь прямоугольника по длине и ширине.
  3. Diagonal(double length, double width): вычисляет длину диагонали прямоугольника по длине и ширине.
     
-- Python --
  Осуществена функция, которая возвращает кортеж состоящий из периметра, площади и диагонали прямоугольника. Функция на вход принимает список из ширины и высоты прямоугольника.

#### Треугольник:
-- C++ --
- Функции:
  1. Perimetr(double first, double second, double third): вычисляет периметр треугольника с помощью трех сторон.
  2. squareGeron(double first, double second, double third, double perimetr): вычисляет площадь треугольника по формуле Герона по трем сторонам.
  3. checkIsosceles(double first, double second, double third): проверяет треугольник на равнобедренность.
  
-- Python --
  Создана программа для вычисления периметра и площади треугольника, также есть проверка на равнобедренность треугольника.

#### Трапеция:
-- C++ --
- Функции:
  1. trapezoid_perimeter(double* array): вычисляет периметр трапеции с помощью трех сторон.
  2. area_of_trapezoid(double* array): вычисляет площадь трапеции с помощью трех сторон.
  3. midline_lenth(double* array): вычисляет длину средней линии трапеции с помощью трех сторон.
  
-- Python --
  Осуществена функция, которая возвращает кортеж состоящий из периметра, площади и длтны средней линии трапеции. Функция на вход принимает список из 4 сторон трапеции(левая боковая сторона, верхнее основание, правая боковая сторона, нижнее основание).

## -- C++ --
В файле figure.hpp описаны прототипы функций.
В файле rectangle.cpp представлена реализация функций для прямоугольника.
В файле laba.cpp представлена реализация функций для треугольника.
В файле trapezoid.cpp представлена реализация функций для трапеции.
В файле menu_figures.cpp создано меню выбора для фигур.
Программа работает с переменными типа double.
## -- Python --
В файле rectangle.py представлена реализация функции для прямоугольника.
В файле trapezoid.py представлена реализация функции для трапеции.
В файле menu_figures.py создано меню выбора для фигур, также прописана программа для треугольника. Учтены исключения, отрицательные величины сторон, также условия существования треугольника и правильность набора сторон для трапеции. Программа работает с переменными типа float.
