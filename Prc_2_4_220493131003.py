import random
import matplotlib.pyplot as plt

def merge_sort(arr):
    comparisons = 0
    swaps = 0

    if len(arr) > 1:
        mid = len(arr) // 2
        left_half = arr[:mid]
        right_half = arr[mid:]

        comparisons_left, swaps_left = merge_sort(left_half)
        comparisons_right, swaps_right = merge_sort(right_half)

        comparisons += comparisons_left + comparisons_right

        i = j = k = 0

        while i < len(left_half) and j < len(right_half):
            comparisons += 1  
            if left_half[i] < right_half[j]:
                swaps += 1  
                arr[k] = left_half[i]
                i += 1
            else:
                swaps += 1  
                arr[k] = right_half[j]
                j += 1
            k += 1

        while i < len(left_half):
            swaps += 1 
            arr[k] = left_half[i]
            i += 1
            k += 1

        while j < len(right_half):
            swaps += 1  
            arr[k] = right_half[j]
            j += 1
            k += 1

    return comparisons, swaps

def generate_random_list(size):
    return [random.randint(1, 5000) for _ in range(size)]

if __name__ == "__main__":
    comparisons = []
    swaps = []
    input_sizes = []

    for i in range(5, 101):  
        arr = generate_random_list(i)
        compare, swap = merge_sort(arr)
        comparisons.append(compare)
        swaps.append(swap)
        input_sizes.append(i)

    print("Input Size (n):", input_sizes)
    print("Comparisons:", comparisons)
    print("Swaps:", swaps)

    plt.plot(input_sizes, comparisons, label='Comparisons')
    plt.plot(input_sizes, swaps, label='Swaps')
    plt.xlabel('Input Size (n)')
    plt.ylabel('Count')
    plt.legend()
    plt.show()
