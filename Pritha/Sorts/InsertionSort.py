def insertionSortAsc(pritha):
    n = len(pritha) # length of the array
    
    # traveling the array from index 1 to n - 1
    for i in range(1 , n):
        holePosition = i
        holePositionValue = pritha[i]
        j = i - 1
        while j >= 0 and pritha[j] > holePositionValue:
                pritha[j + 1] = pritha[j]
                holePosition = j
                j -= 1
        pritha[holePosition] = holePositionValue

    return pritha
        

sortedArray = insertionSortAsc([7, 3, 12, 6, 9])

print("Sorted array is: ", sortedArray)