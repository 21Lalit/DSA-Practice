def find_duplicates(items):
    seen = set()
    duplicates = set()

    for item in items:
        if item in seen:
            duplicates.add(item)
        else:
            seen.add(item)
        
        return list(duplicates)
    
def main():
    user_input = input("Enter items separated by spaces: ")

    items = user_input.split()

    result = find_duplicates(items)

    if result:
        print("Duplicate items:", result)
    else:
        print("No duplicates dound")

if __name__ == "__main__":
    main()
