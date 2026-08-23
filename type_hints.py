# type hints explain what kind of value a function excepts and returns. 
# They are not enforced at runtime, but they can be used by static type checkers, IDEs, and linters to catch potential bugs and improve code readability.

def calculate_percentage(
        obtained_marks: float,
        total_marks: int,
) -> float:
    return obtained_marks / total_marks * 100

    """
    Calculate the percentage of obtained marks out of total marks.

    Args:
        obtained_marks (float): The marks obtained by the student.
        total_marks (int): The total marks possible.

    Returns:
        float: The calculated percentage.
    """
obtained_marks = float(input("Enter obtained marks: "))
total_marks = int(input("Enter total marks: "))

print("Your percentage is: ", calculate_percentage(obtained_marks, total_marks), "%")

if total_marks == 0:
    raise ValueError("Total marks cannot be zero.")
