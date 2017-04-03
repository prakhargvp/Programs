# Implementing Selection Sort in Pyhton using Basic Synatx
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
        j = i+1
        while j<N: 
            if A[j] < A[key]:
                        key = j
            j = j+1
                
        # swap(A[i],A[key])
        temp = A[i];
        A[i] = A[key];
        A[key] = temp;	

# Output
for i in range(N):
    print(A[i],end=" ")

