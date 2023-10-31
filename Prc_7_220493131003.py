import matplotlib.pyplot as plt
import random
mid_values = []
def binary_search(arr, target):
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = left + (right - left)
        mid_values.append(mid)  

        if arr[mid] == target:
            return mid 
        elif arr[mid] < target:
            left = mid + 1  
        else:
            right = mid - 1  

    return -1  

n = 100  
min_value = 1
max_value = 1000
sorted_array = sorted([random.randint(min_value, max_value) for _ in range(n)])
target = random.randint(min_value, max_value)

result = binary_search(sorted_array, target)

print(f"Randomly generated array: {sorted_array}")
print(f"Randomly generated target: {target}")

if result != -1:
    print(f"Element {target} found at index {result}")
else:
    print(f"Element {target} not found in the array")

plt.plot(mid_values, label='Mid Values')
plt.xlabel('Iteration')
plt.ylabel('Mid Value')
plt.legend()
plt.title('Binary Search Mid Values')
plt.show()

