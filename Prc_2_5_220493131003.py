import random
import matplotlib.pyplot as plt

def quick_sort(arr):
    comparisons = [0]  
    swaps = [0]      

    def partition(arr, low, high):
        pivot = arr[high]
        i = low - 1

        for j in range(low, high):
            comparisons[0] += 1  
            if arr[j] <= pivot:
                i += 1
                swaps[0] += 1  
                arr[i], arr[j] = arr[j], arr[i]

        swaps[0] += 1  
        arr[i + 1], arr[high] = arr[high], arr[i + 1]
        return i + 1

    def quick_sort_helper(arr, low, high):
        if low < high:
            pi = partition(arr, low, high)

            quick_sort_helper(arr, low, pi - 1)
            quick_sort_helper(arr, pi + 1, high)

    quick_sort_helper(arr, 0, len(arr) - 1)
    return comparisons[0], swaps[0]

def generate_random_list(size):
    return [random.randint(1, 100) for _ in range(size)]

if __name__ == "__main__":
    comparisons = []
    swaps = []
    input_sizes = []

    for i in range(5, 101):  
        arr = generate_random_list(i)
        compare, swap = quick_sort(arr)
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
