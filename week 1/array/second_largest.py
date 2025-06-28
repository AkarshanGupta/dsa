arr = [10, 4, 56, 3, 89, 5, 89]

unique = list(set(arr))        # Remove duplicates
unique.sort()

if len(unique) >= 2:
    print("Second largest:", unique[-2])
else:
    print("No second largest exists.")
