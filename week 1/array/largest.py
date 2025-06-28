arr = [10,20,30,40,50,60]

max_index = 0
for i in range(1,len(arr)):
    if arr[i] > arr[max_index]:
        max_index = i


print("the largest element index is:",max_index)
print("the largest element is:",arr[max_index])