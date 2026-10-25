data = [34, 12, 89, 45, 7, 23]
target = 45
for i, v in enumerate(data):
    if v == target:
        print("Found at index", i)
        break
else:
    print("Not found")
