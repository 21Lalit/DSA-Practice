# for loop

students = ["Karam", "Drishti", "yug", "prakriti"]

for balak in students[:]:
    print(balak, "is learning python")
    students.append(balak+" sharma")
    students.remove(balak)

print(students)

#while loop

attempts = 0

while attempts < 10:
    print("Trying api request...")
    attempts += 1
