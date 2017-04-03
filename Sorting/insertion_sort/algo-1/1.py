# Implementing Insertion Sort in Pyhton using Basic Synatx
# Input the Size Of Array
N = int(input())
# Declare a empty List to store elements
L = []
# To read the elements
for i in range(N):
     # Adding element in list using list.append()
     L.append(int(input()))

# Insertion Sort Algorithm
# we can also use numpy.arange()
for i in range(N-1):
    key = L[i+1]
    j = i
    while (j >= 0 and L[j] > key):
        L[j+1] = L[j]
        j=j-1
    L[j+1] = key

# Output
for i in range(N):
    print(L[i],end=" ")

