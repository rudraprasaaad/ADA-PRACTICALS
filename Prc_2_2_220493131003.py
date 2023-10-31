import random
import matplotlib.pyplot as plt
def selection_sort(arr):
    n = len(arr)
    comparisons = 0
    swaps = 0
    for i in range(n - 1):
        min_index = i
        for j in range(i + 1, n):
            comparisons += 1 
            if arr[j] < arr[min_index]:
                min_index = j

        if min_index != i:
            swaps += 1 
            arr[i], arr[min_index] = arr[min_index], arr[i]

    return comparisons, swaps

def generate_random_list(size):
    return [random.randint(1, 100) for _ in range(size)]

if __name__ == "__main__":
    comparisons = []
    swaps = []
    input_sizes = []

    for i in range(5, 101):  
        arr = generate_random_list(i)
        compare, swap = selection_sort(arr)
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
