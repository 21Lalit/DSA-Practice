#checking the data input by user is valid or not

def validate_input(value: float) -> float:
    if value < 0 or value > 100:
        raise ValueError("Value must be between 0 and 100.")

    else:
        print("Valid input:", value)
    return value

value = float(input("Enter a value between 0 and 100: "))
validate_input(value)

#we can improve the error displayed using try except block.