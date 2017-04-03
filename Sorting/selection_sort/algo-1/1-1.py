# Implementing Selection Sort in Pyhton using Basic Synatx using range() & numpy.arange()
# Importing Packages
# import numpy for arange() method
import numpy as np
# Input the Size Of Array
N = int(input())
# Declare a empty List to store elements
A = []
# To read the elements
for i in range(N):
     # Adding element in list using list.append()
     A.append(int(input()))

# Selection Sort Algorithm
# we can also use numpy.arange()
for i in range(N-1):
        # Let i-th element be minimum
        key = i;	
        for j in np.arange(i+1,N): 
            if A[j] < A[key]:
                        key = j
                
        # swap(A[i],A[key])
        temp = A[i];
        A[i] = A[key];
        A[key] = temp;	

# Output
for i in range(N):
    print(A[i],end=" ")

