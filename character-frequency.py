def character_frequency(text):
    freq = {}

    for char in text:
        if char in freq:
            freq[char] +=1
        else:
            freq[char] = 1
    return freq

def main():
    text = input("Enter a string:")

    result = character_frequency(text)

    print("\nCharacter Frequency:")
    for char, count in result.items():
        print(f"{char} : {count}")

if __name__ == "__main__":
    main()
