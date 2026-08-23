def reverse_string(text):
    return text[::-1]

def main():
    text = input("Enter a string:")
    result = reverse_string(text)
    print("reversed string:", result)
    
if __name__ == "__main__":
    main()