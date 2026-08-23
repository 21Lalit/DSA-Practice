def is_anagram(word1, word2):
    word1 = word1.lower().replace(" ", "")
    word2 = word2.lower().replace(" ", "")

    return sorted(word1) == sorted(word2)

def main():
    first_word = input("Enter first word:")
    second_word = input("Enter second word:")

    if is_anagram(first_word, second_word):
        print("The words are anagrams.")
    else:
        print("The words are not anagrams.")

if __name__ == "__main__":
    main()