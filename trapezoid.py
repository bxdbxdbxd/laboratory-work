def trapezoid(array_len):
    a, b = array_len[1], array_len[3]
    c, d = array_len[0], array_len[2]
    area_of_trapezoid = ((a + b) / 2) * (c**2 - (((b - a)**2 + c**2 - d**2) / (2 * (b - a)))**2) ** (0.5)
    return round(sum(array_len), 5), round(area_of_trapezoid, 5), round((a + b) / 2, 5)