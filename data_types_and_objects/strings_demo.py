website = "https://www.sadikturan.com"
course = "Python Kursu: Baştan Sona Python Programlama Rehberiniz (40 Saat)"

print(len(course))
print(website[8:11])
print(website[len(website)-3:])
print(course[:15] + course[len(course)-15:])
print(course[::-1])

name, surname, age, job = "Bora", "Yılmaz", 32, "mühendis"

print(f"Benim adım {name} {surname}, Yaşım {age} ve mesleğim {job}")

yazi = "Hello world"
yazi = yazi.replace("w", "W", 1)
print(yazi)
print("abc" * 3)
