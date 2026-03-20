def merge_sort(arr):
    if len(arr) <= 1:
        return arr
    mid = len(arr) // 2
    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid:])

    return merge_sort(left,right)

def merge(left, right):
    result, i, j = [], 0, 0

    while i < len(left) and j < len(right):
        # ← YOUR COMPARISON / LOGIC GOES HERE
        if left[i] <= right[j]:
            result.append(left[i]); i += 1
        else:
            result.append(right[j]); j += 1