myList = ["Bmw", "Mercedes", "Opel", "Mazda"]
print(len(myList))
print(myList[0], myList[-1])
myList[myList.index("Mazda")] = "Toyota"
print(myList)
print(myList.count("Mercedes"))
print("Mercedes" in myList)
print(myList[-2])
print(myList[:3])
myList[-2:] = ["Toyota", "Renault"]
print(myList)
myList.append("Audi")
myList.append("Nissan")
print(myList)
myList.pop()
print(myList)
print(myList[::-1])

students = [["Yigit Bilgi", 2010, [70, 60, 70]], ["Sena Turan", 1999, [80, 80, 70]], ["Ahmet Turan", 1998, [80, 70, 90]]]
for i in students:
    print(i)

kisi_sayisi = 0
toplam = 0
for i in students:
    kisi_sayisi += 1
    for k in i[2]:
    	for j in k:
        	toplam += j / 3.0
ortalama = toplam / kisi_sayisi
print(f"Not ortalamasi: {ortalama}")