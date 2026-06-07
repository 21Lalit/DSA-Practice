def find_max(numbers):
    maximum = numbers[0]

    for num in numbers:
        if num > maximum:
            maximum = num
    
    return maximum

def main():
    user_input = input("Enter numbers separated by spaces: ")

    numbers = user_input.split()

    numbers = [int(num) for num in numbers]

    result = find_max(numbers)

    print("Maximum number is:", result)

if __name__ == "__main__":
    main()