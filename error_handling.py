# error handling prevents a program from crashing when something unexpected happends.
# try, except, else, finally, raise are the keywords used.

"""
try:
    tickets = int(input("Enter the number of tickets: "))

    if tickets <= 0:
        raise Exception("Nummber of tickets must be atleast 1.")
    
    for i in range(tickets):
        age = int(input(f"Enter age of person {i}: "))

        if age < 18:
            raise Exception(f"Person {i} is under 18. Booking is not allowed.")
        
    print("Booking successful for", tickets, "tickets.")

except Exception as e:
    print("Booking failed:", e)

"""

try:
    first_number = int(input("Enter first number: "))
    second_number = int(input("Enter second number: "))

    result = first_number / second_number
    print("Result:", result)

except ValueError:
    print("Invalid input. Please enter valid integers.")

except ZeroDivisionError:
    print("Error: Division by zero is not allowed.")

except Exception as e:
    print("An unexpected error occurred:", e)

else:
    print("Division successful.")

finally:
    print("Program Execution completed.")