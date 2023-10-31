import random
import matplotlib.pyplot as plt

def insertion_sort(arr):
    comparisons = 0
    swaps = 0
    n = len(arr)

    for i in range(1, n):
        key = arr[i]
        j = i - 1

        while j >= 0 and key < arr[j]:
            comparisons += 1  
            arr[j + 1] = arr[j]
            swaps += 1
            j -= 1

        arr[j + 1] = key

    return comparisons, swaps

def generate_random_list(size):
    return [random.randint(1, 100) for _ in range(size)]

if __name__ == "__main__":
    comparisons = []
    swaps = []
    input_sizes = []

    for i in range(5, 101):  
        arr = generate_random_list(i)
        compare, swap = insertion_sort(arr)
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
