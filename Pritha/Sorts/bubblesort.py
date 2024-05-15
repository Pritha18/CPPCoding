def bubbleSortAsc(pritha):
    n = len(pritha) # length of the array
    
    # traveling the array from index 0 to n - 2
    for i in range(n-1):
        for j in range(i, n-1-i):
            if pritha[j] > pritha[j + 1]:
                temp = pritha[j]
                pritha[j] = pritha[j+1]
                pritha[j+1] = temp
                
    return pritha
        

sortedArray = bubbleSortAsc([7, 3, 12, 6, 9])

print("Sorted array is: ", sortedArray)