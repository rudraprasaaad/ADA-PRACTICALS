import random
import matplotlib.pyplot as plt
def bubble_sort(arr):
    n = len(arr)
    compare = 0
    swap = 0
    for i in range(n):
        for j in range(0, n-i-1):
            compare += 1
            if arr[j] > arr[j+1]:
                swap += 1
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return compare, swap

def generate_random_list(size):
    return [random.randint(1, 100) for _ in range(size)]

if __name__ == "__main__":
    comparisons = []
    swaps = []
    input_sizes = []

    for i in range(5, 101):  # Vary input size from 5 to 100
        arr = generate_random_list(i)
        compare, swap = bubble_sort(arr)
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
