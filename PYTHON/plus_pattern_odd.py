# from typing import List

# def minAbsDifference(n: int, a: List[int]) -> int:
#     # Sort the array
#     a.sort(reverse=True)
    
#     # Calculate differences between each pair of the two largest values
#     differences = []
#     for i in range(1, len(a)):
#         differences.append(a[i - 1] - a[i])
    
#     # Find the minimum sum possible from the list of differences
#     min_sum = float('inf')
#     for diff in differences:
#         for sign in [-1, 1]:
#             new_sum = abs(sum(differences) + sign * diff)
#             min_sum = min(min_sum, new_sum)
    
#     return min_sum

# # Example usage:
# n = 5
# a = [4, 9, 8, 2, 7]
# print(minAbsDifference(n, a))  # Output: 0
# Online Python compiler (interpreter) to run Python online.
# Write Python 3 code in this online editor and run it.
x=int(input())
for i in range(1,x+1):
    for j in range(1,x+1):
        if i!=(x+1)/2 and j!=(x+1)/2:
            print(" ",end=" ")
        else:
            print("#",end=" ")
    print()
